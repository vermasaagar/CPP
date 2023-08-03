#include<iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
       int space = i-1;
       for(int j = 1; j <= i; j++)
       {
          
           cout<<" ";
       }

       for(int k =1; k <= n; k++)
       {
           cout<<k-i;
       }
       cout<<endl;
    }

    return 0;
}