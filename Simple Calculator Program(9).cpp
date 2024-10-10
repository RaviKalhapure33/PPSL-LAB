//This is a simple calculator program in CPP
#include <iostream>
using namespace std;

int main() 
{
    char op;
    float num1, num2;
     
    cin>>num1;
    cin>>op;
    cin>>num2;
    switch(op)
    {
    case '+':
    cout<<num1 + num2;
    break;
    
    case '-':
    cout<<num1 - num2;
    break;
    
    case '*':
    cout<<num1 * num2;
    break;
    
    case'/':
    cout<<num1 / num2;
    break;
    
    default:
    cout<<"error!opretor is not correct";
    }
    
    return 0;
    }
