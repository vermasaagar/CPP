#include<iostream>
using namespace std;
 
template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
   int x = 5;
   int y = 7;

   swapp(x, y);
   cout<<"x: "<<x<<endl<<"y: "<<y<<endl;

    return 0;
}
