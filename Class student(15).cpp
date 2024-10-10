#include <iostream>
using namespace std;

class Student 
{
  public:
  //Properties (data members)
  string name;
  int rollNumber;
  int age;
  
  //Function to display student information
  void displayInfo()
  {
    cout<<"Name:"<<name<<endl;
    cout<<"Roll Number: "<<rollNumber<<endl;
    cout<<"Age:"<<age<<endl;
  }
};
int main()
{
//Creat object (instances)of the student class
Student s1;
Student s2;

//Set proprties for student1
s1.name = "Om";
s1.rollNumber = 101;
s1.age = 20;

//Set proprties for student2
s2.name = "Vedant";
s2.rollNumber = 102;
s2.age = 21;

//Display information for each student
cout<<"Student 1 Information: "<<endl;
s1.displayInfo();
cout<<endl; //For better readability
cout<<"Sudent 2 Information:"<<endl;
s2.displayInfo();

    return 0;
}

