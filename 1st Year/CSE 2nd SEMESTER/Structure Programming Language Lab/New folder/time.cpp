#include<iostream>
using namespace std;
int main()
{
    int A,B,C,D;
    cin>>A>>B>>C>>D;

    int dedli=A*60+B;
    int last=B*60+D;

    if(dedli<last)
    {
        cout<<"No"<<endl;
    }else
    {
    cout<<"Yes"<<endl;

    }
    return 0;
}
