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

void InsertionSort(int n,int i,int *arr){
    if(i<0||i>=n-1){
        return; 
    }

    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
        InsertionSort(n,i-1,arr);
    }

    InsertionSort(n,i+1,arr);
    
}

int main(){
    int arr[5];
    acceptArray(5,arr);    
    InsertionSort(5,0,arr);
    printArray(5,arr);
return 0;
}