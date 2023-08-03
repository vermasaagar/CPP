#include<iostream>

using namespace std;

class base{

    int data1;

    public:
    int data2;

    void setData();
    int getData1();
    int getData2();
};

void base::setData(void)
{
    data1 =10;
    data2 =20;
}

int base::getData1()
{
    return data1;
}
int base::getData2()
{
    return data2;
}


class Derived : public base {

    int data3;

    public:

    void process();
    void display();


};


void Derived :: process()
{
    data3 = data2 * getData1();
}

void Derived::display()
{
    cout<< "the value of data1 is :" <<getData1()<<endl;
    cout<< "the value of data1 is :" <<data2<<endl;
    cout<< "the value of data1 is :" <<data3<<endl;

}

int main()
{

Derived obj;
obj.setData();
obj.process();
obj.display();

return 0;

}