#include<iostream>

using namespace std;


int main()

{
    int tab;

    cout<< "Enter table num which you want to print"<<endl;
    cin >> tab;
    int i = 1;
    do 
    {
     int table = (tab*i);
     cout<<table<<endl;
     i++;	


    }while(i <=10); 


    return 0;
}