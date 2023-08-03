#include<iostream>
using namespace std;


class Base1
{
   protected:
   int data1;
   public:
   void setData1(int a)
   {

    data1 =a;

   }
};

class Base2 
{
     protected:
     int data2;
     public:
     void setData2(int a)
     {
        data2 = a;
     }

};

class Derived : public Base1, public Base2
{


   public:
   void show()
   {
    cout << "Base1 data: " << data1 << endl;
    cout << "Base2 data: " << data2 << endl;
    cout << "sum : " << data1 + data2 << endl; 
   }
};



int main()

{
    Derived obj;

    obj.setData1(10);
    obj.setData2(20);
    obj.show();
    return 0;
}