#include<iostream>

using namespace std;

class Complex
{
    int real, imaginary; //

    public:

    void setData(int a, int b)
    {
        real = a; ;
        imaginary = b;
    }

    void getData()
    {
          cout<< "The real Number is : "<<real<<endl;
          cout<< "The imaginary Number is : "<<imaginary<<endl;
    }
};

int main()

 {  


    Complex *ptr= new Complex;

    (*ptr).setData(1,5);
    (*ptr).getData();
    return 0;

 }


// int main(){
//     Complex *ptr = new Complex;
//     ptr->setData(1, 54);
//     ptr->getData(); 

//     // Array of Objects
//     Complex *ptr1 = new Complex[4]; 
//     ptr1->setData(1, 4); 
//     ptr1->getData();
//     return 0;
// }



