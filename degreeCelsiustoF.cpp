#include<iostream>
using namespace std;

int main(){

    float C;
    cout<<"Convert Celsius into Fahrenheit..."<<endl;
    cout<<"Enter Celsius: "<<endl;

    cin>>C;

    float F = (C*9/5)+32;
    cout<<"Temperature in Fahrenheit: "<<F;

    return 0;
}