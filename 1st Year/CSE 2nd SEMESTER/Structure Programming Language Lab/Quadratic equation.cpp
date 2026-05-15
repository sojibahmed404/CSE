#include<iostream>
using namespace std;
 int main()
{
    double a,b,c,A,B;
    cout <<"Enter the value of a,b,c = ";
    cin >>a>>b>>c;

    A=(-b+(sqrt((b*b)-4*a*c)))/(2*a));
    B=(-b-(sqrt((b*b)-4*a*c)))/(2*a));

    cout << "A = "<<A<<endl;
    cout << "B = "<<B<<endl;

    return 0;
}
