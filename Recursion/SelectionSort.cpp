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

void selectionSort(int n,int head,int *arr){
    if(head==(n-1)){
        return; 
    }
    int temp=head;

    for (int i = head+1; i < n; i++)
    {
        if (arr[temp]>arr[i])
        {
            temp=i;
        }
        
    }
    swap(arr[head],arr[temp]);
    selectionSort(n,head+1,arr);
        
}

int main(){
    int arr[5];
    acceptArray(5,arr);    
    selectionSort(5,0,arr);
    printArray(5,arr);
return 0;
}