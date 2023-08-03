#include<iostream>
#include<fstream>

using namespace std;

int main()
{
   string st2;
   
   ifstream in("sample2.txt");
   in>>st2;

   getline(in, st2);
   cout << st2 << endl;


    return 0;
}