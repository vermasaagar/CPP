#include<iostream>
using namespace std;

int main()
{
    int n, r,t,sum = 0;
    cout<<"Enter  a number :"<<endl;
    cin>>n;

    t=n;
    while(n!=0){
        r=n%10;
        sum = sum + r*r*r;
        n=n/10;
    }

    if(t==sum){
        cout<<"Armstrong Number : "<<sum<<endl;
    }

    else{
        cout<<"Not a Armstrong Number : "<<sum<<endl;
    }

    return 0;
}