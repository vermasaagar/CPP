#include<iostream>

using namespace std;

class A
{
    int a;

    public:
    void setData(int a)
    {

      this->a=a;
    }

    void getData(void)
    {
        cout<<"a = "<<a<<endl;
    }
};

int main()
{
    A a;
    a.setData(5);
    a.getData();
}
