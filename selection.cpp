#include<iostream>

using namespace std;

int main()
{
 
  int age;
  cout<<"enter age"<<endl;
  cin>>age;


  if(age>18 && age<20)
  {
    cout<<"you are invited"<<endl;
    
  }

  else if(age>20 && age<25)
  {
    cout<<"not invited"<<endl;
  }

  else if(age>25 && age<30)

  {
    cout<<"your age must be geater than 18  and less than 20"<<endl;
  }

  else
  {
    cout<<"invalid age"<<endl;
  }

    return 0;

}