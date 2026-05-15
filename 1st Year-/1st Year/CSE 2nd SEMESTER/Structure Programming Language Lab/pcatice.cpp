#include<iostream>
using namespace std;

class Student {

  string name ;
  string rollnumber;
  double CGPA;

  public:
      void setname(string n){name = n;}
      void setrollnumber(string r){rollnumber = r;}
      void setCGPA(double result)
      {
      if (result>=0.0 && result<=4.00)
        CGPA = result;

      }
    string getname(){return name;}
    string getrollnumber(){return rollnumber;}
    double getCGPA(){return CGPA;}

};

int main()
{
    Student person;
    person.setname("sojib");
    person.setrollnumber("06");
    person.setCGPA(4.00);

    cout<<"Name;"<<person.getname()<<endl;
    cout<<"Name;"<<person.getrollnumber()<<endl;
    cout<<"Name;"<<person.getCGPA()<<endl;

    return 0;
}


