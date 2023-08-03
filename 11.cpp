#include<iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  char ch = 'A';
  for(int row=1; row<=n; row++)
  {
    for(int col=1; col<=row; col++)
    {
        ch = row + col - 2 + 'A';
        cout<<ch;
    }
   cout<<endl;
  }


    return 0;
}