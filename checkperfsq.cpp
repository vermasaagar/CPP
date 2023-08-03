#include<iostream>
#include<math.h>
using namespace std;


int main(){

    int n;

    cout<<"Enter a number : "<<endl;
    cin>>n;

    int s=sqrt(n);
    if(s*s==n){
        cout<<"Perfect Square: "<<s<<endl;

    }
    else{
        cout<<"We cant find the perfect square: "<<endl;
    }

    return 0;
}

