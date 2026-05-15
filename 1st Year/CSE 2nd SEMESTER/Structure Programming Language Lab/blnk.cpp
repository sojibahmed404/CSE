#include<iostream>
using namespace std;
class BankAccount
{
private:
    string accNum;
    double bal;
    string holder;

public:
    void setAccNum(string Num) { accNum = Num; }
    void setbal(double Tk)
    {
        if (Tk > 0)
            bal = Tk;
        else
            cout << "Invalid balance! Balance cannot be negative" << endl;
    }

    void setholder(string Name) { holder = Name; }
    string getaccNum() { return accNum; }
    double getbal() { return bal; }
    string getholder() { return holder; }
};

int main()
{
    BankAccount person1;
    person1.setAccNum("203010");
    person1.setbal(40000);
    person1.setholder("Sojib");

    cout << "Account Number: " << person1.getaccNum() << endl;
    cout << "Balance: " << person1.getbal() << endl;
    cout << "Holder: " << person1.getholder() << endl;

    return 0;
