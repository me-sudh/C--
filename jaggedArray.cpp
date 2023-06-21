#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int row;
    int n=5;
    cin>>row;

    int **arr= new int*[row];

    //allocating memory--------------------------------------
    for(int i=0;i<row;i++){
        arr[i]= new int[n--];
    }
    //----------------------------------------------------
    n=5;
    // input array--------------------------------------------
    for(int i=0;i<row;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
        n--;
    }
    // -----------------------------------------------

    n=5;
    //print array---------------------------------------
    for(int i=0;i<row;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        n--;
    }
    // ----------------------------------------------------
    return 0;
}