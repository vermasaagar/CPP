#include<iostream>
using namespace std;

int main()
{
    
   
   for(int i =1; i<=4; i++)
   {
    char ch = 'A'+4-i;
    for(int j =1; j<=i; j++)
    {
       
        cout<<ch;
         ch++;
    }
   
    cout<<endl;
   }


    return 0;
}