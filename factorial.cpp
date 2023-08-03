#include<iostream>
using namespace std;

int main()
{

int f,n;
cout<<"Enter NUmber: "<<endl;
cin >> n;
f=n;
for(int i=1;i<n;i++)
{
    f=f*i;
    
}
 cout<<f;


    return 0;
}
