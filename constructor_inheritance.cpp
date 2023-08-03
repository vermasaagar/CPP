#include <iostream>
using namespace std;



class Base1
{

    int data1;
    public:
    Base1(int i)
    {
        data1 = i;
    }

    void print_data1(void)
    {
        cout << "base class 1 data :" <<data1 << endl;
    }
};

class Base2
{

    int data2;
    public:
    Base2(int i)
    {
        data2 = i;
    }

    void print_data2(void)
    {
        cout << "base class 2 data :" <<data2<< endl;
    }
};

class Derived: public Base1, public Base2
{

    int data3, data4;
    public:
    Derived(int a, int b, int c, int d): Base2(b), Base1(a)
    {
        data3 = c;
        data4 = d;
    }

    void print_derived(void)
    {
        cout << "Derived class 3 data :" <<data3<< endl;
        cout << "Derived class 4 data :" <<data4 << endl;
    }
};



int main()
{

Derived obj(1, 2, 3, 4);
obj.print_data1();
obj.print_data2();
obj.print_derived();



    return 0;
}