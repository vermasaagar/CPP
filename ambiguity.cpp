#include<iostream>

using namespace std;


class base1
{

    public:
    void greet()
    {
        cout <<"hello how are you?" <<endl;
    }
};
class base2
{

    public:
    void greet()
    {
        cout <<"kaise ho" <<endl;
    }
};

class Derived: public base1, public base2
{

    public:
    void greet()
    {
        base2 :: greet();

    }
};




int main()
{

   base1 obj1;
   base2 obj2;

   obj1.greet();
   obj2.greet();

   Derived x;
   x.greet();


    return 0;

}