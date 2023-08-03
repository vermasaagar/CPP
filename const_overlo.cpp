#include<iostream>
#include<math.h>

// constructor overloading

using namespace std;

class point{ 
    int a,b;

    public:
    point(int x, int y)
    {
        a =x;
        b =y;
    }


    point(int x)
    {
        a=x;
        b=0;
    }

    void printPoint()

    {
        cout<<"points  :"<< "("<<a<<" , "<<b<<")"<<endl;
    }
};

int main ()
{
    point p1(4, 5);
    p1.printPoint();

    point p2(5);
    p2.printPoint();

    return 0;
}
