
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
int merge(int s,int e, int *arr){
    int inv=0;
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
            inv += len1-index1;
            arr[k++]=right[index2++];
        }
    }
    while (index1<len1){
        arr[k++]=left[index1++];   
    }
    while (index2<len2){
        arr[k++]=right[index2++];
    }
    return inv;
}


int mergeSort(int s, int e,int *arr){
    //base Case
    if(s>=e){return 0;}

    int mid= s+(e-s)/2;
    //left
    int inv1=mergeSort(s,mid,arr);
    //right
    int inv2=mergeSort(mid+1,e,arr);


    //merge
    int inv3=merge(s,e,arr);
    return(inv1+inv2+inv3);
}

int main(){
    int n;
    cout<<"Total elements: ";
    cin>>n;
    int *arr= new int[n];
    acceptArray(n,arr);
    cout<<"Inversion count: "<<mergeSort(0,n-1,arr)<<endl;   
    printArray(n,arr);
return 0;

}