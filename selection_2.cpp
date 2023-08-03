#include<iostream>

using namespace std;


int main()
{

     int num;

     cout << "To find the day of the week" << endl;

     cout << "Enter any number "<<endl;
     cin >> num;



     switch(num){

        case 0:
        {
            cout <<"Sunday" << endl;
            break;
        }

        case 1:
        {

        
        
        cout <<"monday" << endl;
        break;
        }

        case 2:
        {
            cout <<"tuesday" << endl;
            break;
        }
        case 3:
        {
            cout <<"Wednesday" << endl;
            break;
        }
        case 4:
        {
            cout <<"Thrusday" << endl;
            break;
        }
        case 5:
        {
            cout <<"Friday" << endl;
            break;
        }

        case 6:
        {
            cout <<"Saturday" << endl;
            break;
        }

        default:
        {
            cout <<"not a valid day" << endl;
            break;
        }
     } 




    return 0;
}