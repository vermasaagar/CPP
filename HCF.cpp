#include<iostream>
using namespace std;

int main(){
    int a,b,HCF,r;

    cout<<"Enter two Number"<<endl;
    cin>>a;
    cin>>b;

    while(true){
        
        HCF=b;
        r=a%b;
        a=b;
        b=r;
      
        if(b==0){
        break;
    }
    }
    cout<<"HCF is : "<<HCF<<endl;
    

  return 0;
}