#include<iostream>
using namespace std;

int main(){
    string str;

    cout<<"Enter any Sentence: "<<endl;
    getline(cin, str);
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == 'A' || str[i] == 'a' ){
            continue;
        }


        else if(str[i] == 'E' || str[i] == 'e' ){
            continue;
        }


        else if(str[i] == 'I' || str[i] == 'i' ){
            continue;
        }



        else if(str[i] == 'O' || str[i] == 'o' ){
            continue;
        }


        else if(str[i] == 'U' || str[i] == 'u' ){
            continue;
        }
        else{

            cout<<str[i];
        }


        
    }


    return 0;
}