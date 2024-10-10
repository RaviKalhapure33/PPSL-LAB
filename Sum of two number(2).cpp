//CPP Program for sum of two number

#include <iostream> // For input and output
using namespace std;

  int main() //int is a data type 
  {
    
    int num1, num2; // Variables to hold the numbers

    cout << "Enter two numbers: ";
    cin >> num1 >> num2; // Read two numbers from the user

    // Calculate and display the sum
    cout << "The sum is " << num1 + num2 << std::endl;

    return 0; // Indicate successful execution
}