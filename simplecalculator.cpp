#include<iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"enter the values of a and b :";
    cin>>a>>b;

    char op;
    cout<<"enter the operator :";
    cin>>op;

    switch(op){
        case('+'):{
            cout<<"sum = "<<a+b;
            break;
        }
        case('-'):{
            cout<<"sub = "<<a-b;
            break;
        }
        case('*'):{
            cout<<"mul = "<<a*b;
            break;
        }
        case('/'):{
            cout<<"div = "<<a/b;
            break;
        }
        default:{
            cout<<"enter valid operator.....!";
            break;
        }

    }
return 0;
    
}