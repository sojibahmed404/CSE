#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    // Parameterized Constructor
    Student(string n, int r, float m) {
        name = n;
        rollNumber = r;
        marks = m;
    }

    // Copy Constructor
    Student(const Student &s) {
        name = s.name;
        rollNumber = s.rollNumber;
        marks = s.marks;
    }

    // Display function
    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Creating an object using the parameterized constructor
    Student student1("Abir", 101, 95.5);

    // Creating another object using the parameterized constructor for a different student
    Student student2("Rafi", 102, 92.0);

    // Display details of both objects
    cout << "Student 1 Details:" << endl;
    student1.display();

    cout << "\nStudent 2 Details:" << endl;
    student2.display();

    return 0;
}
