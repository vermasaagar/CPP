#include<iostream>
using namespace std;

class complex {

    int a, b;

    public:

    complex(int , int);
    void print()
    {
        cout<<"complex number is : "<<a<<" + "<<b<<"i"<<endl;
    }


};

complex::complex(int x, int y)
{
    a=x;
    b=y;
}

int main()  
{

    complex a(4, 5);  //implicit call
    a.print();
 

    // Explicit call 

    complex b = complex(5, 8);
    b.print();
    return 0;
    
}