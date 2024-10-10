//CPP Program for given number is in between 10 and 20
#include <iostream>
using namespace std;

int main() 
{	
 int number;
 cout<<"Enter a number:"<<endl;
cin>>number;
 
 if (number>=10 && number<= 20)
 
 {
   cout<<"The number "<< number <<" is in between 10 and 20.\n";
 }
   else
   {
     cout<<"The number "<< number <<" is not in between 10 and 20" <<endl;
  }


  return 0;
}

