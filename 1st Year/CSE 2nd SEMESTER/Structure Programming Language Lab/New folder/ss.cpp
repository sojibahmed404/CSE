#include <iostream>
using namespace std;

class info {
private:
    int id;
public:
    void get_info() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "ID: " << id << endl;
    }
};

class student : public info {
public:
    void print() {
        get_info();
    }
};

int main() {
    student obj;
    obj.print();
    return 0;
}
