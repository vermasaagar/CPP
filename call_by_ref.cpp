#include<iostream>
using namespace std;


//call by referece 1 method
// int swap(int *a, int *b) {

//     int temp = *a;
//     *a = *b;
//     *b= temp;
// }

// int main() {

//     int x =4 , y =7;
//     swap(&x, &y);

//     cout << x << " " << y;

// return 0;
// }  

//call by referece 2 method
int swap(int &a, int &b) {

    int temp = a;
    a = b;
    b= temp;
}

int main() {

    int x =4 , y =7;
    swap(x, y);

    cout << x << " " << y;

return 0;
}