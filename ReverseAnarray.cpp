#include<iostream>
using namespace std;


int main(){

    int arr[] = {5,10,20,30,40,50};
    int length = sizeof(arr)/sizeof(arr[0]);
    for(int i=length-1; i>=0; i--){
        cout<<arr[i];
        cout<<" ";

    }
}