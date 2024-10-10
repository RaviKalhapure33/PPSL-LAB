// CPP program to check if a given number is even or odd.
#include <iostream>
using namespace std;

int main() 
{
    int num;
    
    cout<<"Enter a number:"<<endl;
    
    cin>>num;
    
    if (num % 2 == 0)
  
   {
     cout<<"The given number is Even "<<endl;
   }
    else
    {
      cout<<"The given number is Odd "<<endl;
    }
    return 0;
}
