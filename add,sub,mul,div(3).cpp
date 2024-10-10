#include<iostream>
using namespace std;

int main() 
{
   
    int first,second,sum,subtract,multiply;
    float divide;
    
    cout<<"Enter a two number: ";
    cin>>first;
    cin>>second;
    
    // Perform arithmetic operations
    sum = first + second;
    subtract = first - second;
    multiply = first * second;
    divide = first / (float) second;
    
  // Display results
   cout<<endl<<"sum= "<<sum;
   cout<<endl<<"subtarct= "<<subtract;
   cout<<endl<<"multiply= "<<multiply;
   cout<<endl<<"division= "<<divide;
   
    return 0;
} 
