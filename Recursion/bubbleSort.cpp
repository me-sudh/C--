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

void bubbleSort(int n,int *arr){
    if(n==0||n==1){
        return; 
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }

    }
    bubbleSort(n-1,arr);
}

int main(){
    int arr[5];
    acceptArray(5,arr);    
    bubbleSort(5,arr);
    printArray(5,arr);
return 0;
}