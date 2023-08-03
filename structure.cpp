#include<iostream>

using namespace std;

struct Employee{

    int emp_ID;
    char emp_Name;
    float Salary;
};


int main()
{


    struct Employee rishu;
    rishu.emp_ID = 1;
    rishu.emp_Name = 'r' ;
    rishu.Salary =12000;

    cout << "ID: " << rishu.emp_ID << endl;
    cout << "Name: " << rishu.emp_Name << endl;
    cout << "Salary: " << rishu.Salary<< endl;

 return 0;
}
