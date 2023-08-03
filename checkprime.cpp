#include<iostream>
using namespace std;

int main()
{
   int n,i;
   cout<<"Enter a Number : "<<endl;
   cin>>n;
   
   for(i=2; i<n; i++)
   {
   if(n%i==0 )
   {
    cout<<"not Prime :"<<n<<endl;
    break;
   }
   
   }

  if(i==n)
  {
    cout<<"Prime :"<<n<<endl;
  }

    return 0;
}