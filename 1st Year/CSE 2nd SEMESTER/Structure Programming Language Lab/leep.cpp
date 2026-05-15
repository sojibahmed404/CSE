#include<iostream>
using namespace std;
 int main()
 {

     int y ;
     cout<< "Enter the year :";
     cin>>y;

     if (y%4==0||y%400==0 & y%100!=0)
     {
         cout<< "Leap year"<<endl;
     }
     else
        cout<< "not Leap year"<<endl;
     return 0;
 }
