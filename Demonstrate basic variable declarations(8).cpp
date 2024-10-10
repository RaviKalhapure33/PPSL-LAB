//CPP program that demonstrates basic variable declarations,and condition is True or False
#include<iostream>
#include<string>

using namespace std;


int main() 
{
   int myVariable = 50;
   float anotherVariable = 30.66;
   bool isTrue = true;
   
   cout<<"The value of my variable is:"<<myVariable<<endl;

   cout<<"The value of another variable is:"<<anotherVariable<<endl;

   cout<<"The value is: "<<(isTrue ? "True":"False")<<endl;

   if(isTrue)
   {
     cout<<"The condition is True!"<<endl;
   }
   else
   {
     cout<<"The condition is False!"<<endl;
   }
   
    return 0;
}
