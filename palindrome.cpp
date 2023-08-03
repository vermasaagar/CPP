#include<iostream>
using namespace std;

int main(){
    int n,r,t,sum=0;
    cout<<"Enter the Number: "<<endl;
    cin>>n;
    t=n;

    while(n!=0){
        r=n%10;
        sum = sum*10+r;
        n=n/10;
    }

    if(t==sum){
        cout<<"Palindrome Number : "<<sum<<endl;
    }
    else{
        cout<<"Not a Palindrome Number : "<<sum<<endl;
    }
return 0;
}