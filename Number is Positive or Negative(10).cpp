//CPP Program to check the given number is Positive or Negative
#include <iostream>
using namespace std;

int main() 
{
    int number;
    cout<<"Enter a two number:"<<endl;
    cin>>number;
    
    if(number>=0)
    
{
     cout<<"The given number "<<number<<" is positive.\n";
}
else
{
    cout<<"The given number "<<number<<" is negative.\n";
    
   } return 0;
}