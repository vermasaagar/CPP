#include<iostream>
using namespace std;

int main()
{

    int n;
    cout<<"Enter n"<<endl;
    cin >> n;
    int count =1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<count+j-1;
        }
        
        cout<<endl;
        count++;
        
        
    }


    return 0;
}