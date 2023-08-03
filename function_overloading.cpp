#include<iostream>

using namespace std;

int sum(int a, int b)

{
    return a + b;

}

int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{

    cout<<"Sum of two numbers: "<<sum(4,5)<<endl;
    cout<<"Sum of three numbers: "<<sum(1,2,3)<<endl;


    return 0;   
}