#include<iostream>
#include<fstream>

using namespace std;

int main()
{
  string st ="Hello World!";

  ofstream out("sample1.txt");
  out << st;

    return 0;
}