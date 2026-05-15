#include<iostream>
using namespace std;
class parson
{

  private:
   string name ;
   int age;

   public:

    void setName(string n){name = n;}
    void setAge(int a){
    if (a>0)age = a;
    else cout << "invalid age" << endl;

    }

    string getName() {return name;}
    int getage(){return age;}


};
  int main(){

  person person1;
  person1.setname ("BOB");
  person1.setage ("30");
  cout<<"Name:"<<person1.getname()<<endl;
   cout<<"Age:"<<person1.getage()<<endl;
   return 0;



  }

