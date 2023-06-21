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

int partion (int s, int e,int*arr){
    
    int count=0;
    for (int i = s+1; i <=e; i++)
    {
        if (arr[i]<arr[s])
        {
            count++;
        }
        
    }
    int pivot=s+count;
    swap(arr[s],arr[pivot]);

    int i=s,j=e;
    while (i<pivot&&j>pivot)
    {
        while (arr[i]<arr[pivot])
        {
            i++;
        }
        while (arr[j]>arr[pivot])
        {
            j--;
        }

        if(i<pivot&&j>pivot){
            swap(arr[i++],arr[j--]);
        }
        
        
    }

    return pivot;
    
    
}


void quickSort(int s,int e,int *arr){
    //base case
    if(s>=e){
        return;
    }
    
    //partition
    int p = partion(s,e,arr);
    //sort left
    quickSort(s,p-1,arr);
    
    //sort right
    quickSort(p+1,e,arr);
}

int main(){
    int n;
    cin>>n;
    int *arr =new int[n];
    acceptArray(n,arr);

    quickSort(0,n-1,arr);
    printArray(n,arr);
    return 0;
}