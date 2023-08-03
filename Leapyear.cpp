#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter Year to check Leap Year:"<<endl;
    cin >> n;

    if( n % 4 == 0)
    {
        cout<<"Leap Year "<<endl;

    }
    else if( n % 100 == 0  )
    {
        cout<<" Ordinary Year "<<endl;

    }

    else if(n % 400==0)
    {
        cout<<"Leap Year "<<endl;

    }
   
    else
    {
        cout<<"Ordinary Year "<<endl;
    
    }
    return 0;
}