#include<iostream>

using namespace std;


int main()
{

    int a = 5;
    int *b = &a;


    cout<<"Address of a: "<<&a<<endl;
    cout<<"Address : "<<b<<endl;
    cout<<"value at b : "<<*b<<endl;

    //pointer to pointer

    int **c =&b;

    cout<<"Address of b: "<<&b<<endl;
    cout<<"Address of b : "<<c<<endl;
    cout<<"value at c : "<<*c<<endl;
    cout<<"value at address (value at (c)) : "<<**c<<endl;


    return 0;
}