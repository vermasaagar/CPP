#include<iostream>

using namespace std;

int main()
{
   //int marks[] = { 23, 32, 45, 54};



   int marks[4];
   marks[0] =23;
   marks[1] =43;
   marks[2] =32;
   marks[3] =54;

//    cout << marks[0] << " " << marks[1] <<" "<<marks[2] << " " << marks[3] << endl;




for(int i=0; i<=4; i++)
{


    cout << "value :" <<i<<"is"<<marks[i]<<endl;
}


    return 0;
}