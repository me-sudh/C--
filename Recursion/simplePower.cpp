#include <iostream>

using namespace std;

int power(int n){
    cout<<"\n"<<((n==0)?888:n);
    int ans;
    //base condition
    if(n==0){
        return 1;
    }

    ans=2*power(n-1);

    return ans;
    
}

int main()
{
    int n;
    cout << "Enter the power of 2" << endl;
    cin >> n;

    cout << "\nAnswer: " << power(n);

    return 0;
}