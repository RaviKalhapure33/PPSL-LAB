//CPP Program to Check largest number
#include <iostream>
using namespace std;

int main() 
{
  int a;
  int b;
  int c;
  cout<<"Put any three number:"<<endl;
  cin>>a;
  cin>>b;
  cin>>c;
  if(a>=b & a>=c)
 {
   cout<<"The largest number is:"<<a;
 }
   if(b>=a & b>=b)
 {
  cout<<"The Largest number is:"<<b;
 }
   if(c>=a & c>=b)
 {
   cout<<"Tha Largest number is:"<<c;
 }
  return 0;
}

