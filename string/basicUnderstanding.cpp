#include<iostream>
#include<string>
using namespace std;

int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

bool checkPalindrome(char name[],int len){
    int j=len-1;
    bool flag=true;
    for(int i=0;i<j;i++){
        if(name[i]!=name[j]){
            flag=false; 
            break;
        }
        else{
            j--;
        }
    }
    // cout<<flag<<endl;
    return flag;
}

int main(){
    char name[20];

    cout<<"Type your name:";
    cin >>name;

    //for su\0hanshu
    // name[3]='\0';
    int len= getLength(name);
    cout<<"\n your name is: "<<name<<endl;// try- 1. Sudahnshu    2. Sudahnshu Chauhan
    cout<<"length of you name is:"<<getLength(name)<<endl;
    cout<<"wheater it is a palindrome:"<<checkPalindrome(name,len)<<endl;
    
    //checking copy function--------------------------------
    char cop[20]="hello";
    copy(begin(name),end(name),begin(cop));
    cout<<"this is copied:"<<cop;
    // --------------------------------------------
    int arr[26]={0};//you can only initialize it with 0
    cout<<"\nvalue at arr[21] is:"<<arr[25];

    return 0;

}