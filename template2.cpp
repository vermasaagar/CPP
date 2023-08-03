#include<iostream>
using namespace std;


template<class T1, class T2>
class  myClass
{

    int data1;
    char data2;
    public:

    myClass(T1 a, T2 b)
    {

        data1 = a;
        data2 = b;
    }

    void display()
    {
        cout<<this->data1<<endl<<this->data2<<endl;
    }




};

int main()

{
  myClass<int, char> obj(5, 'S');
  obj.display();



    return 0;
}