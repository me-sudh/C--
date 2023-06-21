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

int Sum(int size,int *arr){
    int total=0;
    if(size==0){
        return 0;
    }
    total+=*arr+Sum(size-1,arr+1);

    return total;
}

bool LinearSearch(int size,int *arr,int key){
    bool ans;
    if(size==0){
        return false;
    }
    
    if(*arr==key){
        return true;
    }
    ans=LinearSearch(size-1,arr+1,key);
    return ans;
}

int main(){
    int arr[4];
    int key=4;
    acceptArray(4,arr);
    printArray(4,arr);

    cout<<"Element found: "<<LinearSearch(4,arr,key);

    cout<<"\nTotal sum is: "<<Sum(4,arr);    
    return 0;
}