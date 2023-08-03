#include<iostream>
using namespace std;


//pointer and array



int main()
{
   int marks[4];

   marks[0] = 23;
   marks[1] =22;
   marks[2] =32;
   marks[3] = 44;


//   for(int i = 0; i < 4; i++)
//   {

//     cout <<"the value of marks is : "<< i<<marks[i]<<endl;
//   }




   

   int *p = marks;
   cout<<" the value of *p is :"<<*p<<endl;
   cout<<" the value of *(p+1) is :"<<*(p+1)<<endl;
   cout<<" the value of *(p+2) is :"<<*(p+2)<<endl;
   cout<<" the value of *(p+3) is :"<<*(p+3)<<endl;

   







    return 0;
}