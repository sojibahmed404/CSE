#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
    public:
     int id;
     double gpa;


};


int main()
{

  Student Sojib;
   Sojib.id = 06;
   Sojib.gpa = 4.83;

   cout<<Sojib.id<< "  " << Sojib.gpa <<endl;


  getch();

}
