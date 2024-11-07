#include <iostream>
using namespace std;

int main() 
{
  double numerator,demonirator, divide;
  
    cout << "Enter numerator:";
    cin >> numerator;
   
   cout << "Enter dominator:";
   cin >> demonirator;
   
   try {
     
    //throw an exception if denominator is 0
    
    if (demonirator == 0)
        throw 0;
    //not executed if denominator is 0
    
  divide = numerator/ demonirator;
  cout << numerator <<"/" << demonirator <<"=" << divide << endl;
   }
   
   catch (int num_exception){
     cout << "Error : cannot divided by" << num_exception <<endl;
   }
   return 0;
}