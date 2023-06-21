
//Article on Merge sort
//  https://www.geeksforgeeks.org/merge-sort/



#include<iostream>
using namespace std;
void acceptArray(int n,int *arr){
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void printArray(int n,int *arr){
    cout<<"Elemnts are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
void merge(int s,int e, int *arr){
    int mid=(s+e)/2;
    int len1= mid-s+1;int len2=e-mid;
    int left[len1];int right[len2];

    int k=s;
    for (int i = 0; i < len1; i++)
    {
        left[i]=arr[k++];
    }
    
    for (int j = 0; j < len2; j++)
    {
        right[j]=arr[k++];
    }
    // printArray(len1,left);
    // printArray(len2,right);

    //now sort
    int index1=0;int index2=0;
    k=s;

    while (index1<len1 && index2<len2){
        if(left[index1]<right[index2]){
            arr[k++]=left[index1++];
        }
        else{
            arr[k++]=right[index2++];
        }
    }
    while (index1<len1){
        arr[k++]=left[index1++];   
    }
    while (index2<len2){
        arr[k++]=right[index2++];
    }
    
}


void mergeSort(int s, int e,int *arr){
    //base Case
    if(s>=e){return;}

    int mid= s+(e-s)/2;
    //left
    mergeSort(s,mid,arr);
    //right
    mergeSort(mid+1,e,arr);


    //merge
    merge(s,e,arr);

}

int main(){
    int arr[5];
    int n= sizeof(arr)/sizeof(arr[0]);
    acceptArray(n,arr);
    mergeSort(0,n-1,arr);   
    printArray(n,arr);
return 0;

}