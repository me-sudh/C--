#include<iostream>
using namespace std;

int fact(int n){
    int ans;
    if(n==0){
        return 1;
    }
    ans = n*(fact(n-1));
    return ans;
    
}



int main(){
    int n;

    cout<<"Enter the number:"<<endl;
    cin>>n;

    cout<<"The factorial to that number is : "<<fact(n);

    return 0;
}