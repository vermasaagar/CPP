#include<iostream>
using namespace std;

int main(){

    int a,b,x,y,lcm,hcf,r;


    cout<<"Enter the number "<<endl;
    cin>>a>>b;

    x=a;
    y=b;

    while(true){
        
        lcm=a;
        r=a%b;
        if(r==0){
            break;
}
        a=a*2;
        
        }
   hcf=x*y/lcm;
   cout<<"LCM is:"<<lcm<<endl;
   cout<<"HCF is:"<<hcf<<endl;

   return 0;

   
}