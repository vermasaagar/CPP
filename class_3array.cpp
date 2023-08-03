#include<iostream>

using namespace std;

class shop 
{
    int itemId[100];
    int itemPrice[100];
    int counter;

    public:

    void initCounter(void) 
    {
        counter = 0;
    }
    void setItemPrice(void);
    void display();
};


void shop::setItemPrice(void)
{
    cout<<"enter itemId"<< counter +1 <<endl;
    cin>>itemId[counter];
    cout<<"enter itemPrice"<<endl;
    cin>>itemPrice[counter];
    counter++;



}

void shop::display(void)
{
  for(int i = 0; i < counter; i++)
  {
    cout<<"itemID is : "<<itemId[i]<<" "<<"itemPrice is :"<<itemPrice[i]<<endl;
  }
}

int main()
{
    shop s;
    s.initCounter();
    s.setItemPrice();
    s.setItemPrice();
    s.setItemPrice();
    s.display();


    return 0;
}