#include<iostream>
using namespace std;

int main(){


    int i,j,n;
    cout<<"Enter the number : "<<endl;
    cin>>n;

     for(i =2; i<n; i++){
        for(j=2; j<i; j++){

            if(i%j==0){
                cout<<"";
                break;
        }
        }

        if(j==i){
            cout<<j;
        }

     }

    return 0;
}