#include<iostream>
#include<string.h>
using namespace std;

void ReverseString(string& arr,int i,int j){
    if(i>=j){
        return;
    }
    swap(arr[i],arr[j]);
    i++;
    ReverseString(arr,i,arr.length()-i-1);
}

bool checkPalindrome(string& arr,int i,int j){
    bool ans=false;
    if(i>=j){
        return true;
    }
    
    if(arr[i]==arr[j]){
        i++;
        ans=checkPalindrome(arr,i,arr.length()-i-1);
    }

    return ans;
}


int main(){
    string arr; 
    cout<<"Enter the String to be reversed:"<<endl;
    cin>>arr;
    int i=0;
    int j=arr.length()-1;

    cout<<"Checking for Palindrome......\n ANSWER: "<<checkPalindrome(arr,0,arr.length()-1)<<endl;
    ReverseString(arr,0,arr.length()-1);
    cout<<"Reversed String is :\n"<<arr;
    return 0;
}