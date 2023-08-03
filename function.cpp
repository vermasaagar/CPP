#include<iostream>

using namespace std;

//a and b are formal parameter   will be taking values from actual paramters num1 and num2

int sum(int a, int b) {
    int c = a + b;

    return c;

}

int main() 
{

    int num1, num2; 

    cout<<"Enter num1"<<endl;
    cin>>num1;
    
    cout<<"Enter num2"<<endl;
    cin>>num2;
    // num1 amd num2 are actual parameters
    cout<<"Sum is : "<<sum(num1, num2);

    return 0;
}