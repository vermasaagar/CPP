#include<iostream>

using namespace std;

union money {

    int rice;
    char car;
    float pounds;
};

int main()
{
    union money m1;

    m1.rice = 12;
    m1.car = 'c';
    m1.pounds = 12.5;

    cout << "price of rice is : " << m1.rice << endl;
    cout << "car  : " << m1.car << endl;
    cout << "pounds : " << m1.pounds << endl;
    

    // teeno me se ek hi print hoga kyuki memory share hoti hai union me aur 
    //struction me memory share nhi hoti


    return 0;   
}