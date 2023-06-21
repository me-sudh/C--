#include<iostream>
#include<string>
using namespace std;

int main(){
    string sentence;
    char name[20];
    cout<<"enter the string:";
    cin>>sentence;

    int f=sentence.find("amt");
    cout<<"f:"<<f<<endl;
    if(f==-1){
        cout<<"didn't find it"<<endl;
    }
    else{
        cout<<"found sud in the sentence"<<endl;
    }



    // int a[26]={0};
    // for(int j:a){
    //     cout<<" ,"<<a[j];
    // }
    // for(int i=0;i<sentence.length();i++){
    //     cout<<sentence[i]-'a'<<endl;
    //     a[(sentence[i]-'a')]++;
    // }
    // for(int j=0;j<26;j++){
    //     cout<<" ,"<<a[j];
    // }
    sentence.replace(2,1,"@40");
    cout<<endl<<sentence<<endl;
    int t=123;
    string l;
    l=to_string(t);
    cout<<l[0]<<" ,"<<l[1]<<","<<l[2]<<endl;

    int c;char ch ; float a;double b; string st;

    cout<< sizeof(c)<<endl;
    cout<< sizeof(ch)<<endl;
    cout<< sizeof(a)<<endl;
    cout<< sizeof(b)<<endl;
    cout<< sizeof(st)<<endl;

}