#include <iostream>
using namespace std;

// 1. Single Inheritance - Animal and Dog
class Animal {
public:
    void eat() {
        cout << "I can eat!" << endl;
    }
    void sleep() {
        cout << "I can sleep!" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

// 2. Single Inheritance - Info and Student
class Info {
private:
    int id;
public:
    void get_info() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "ID: " << id << endl;
    }
};

class StudentSingle : public Info {
public:
    void print() {
        get_info();
    }
};

// 3. Multiple Inheritance - Info, Result, and Student
class Result {
private:
    int mark;
public:
    void get_mark() {
        cout << "Enter mark: ";
        cin >> mark;
        cout << "Mark: " << mark << endl;
    }
};

class StudentMultiple : private Info, private Result {
public:
    void print() {
        get_info();
        get_mark();
    }
};

// 4. Multilevel Inheritance - PersonalInfo, AcademicInfo, ExamInfo, Student
class PersonalInfo {
private:
    string name;
    string address;
    string phoneNumber;
public:
    void readPersonalInfo() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter address: ";
        getline(cin, address);
        cout << "Enter phone number: ";
        getline(cin, phoneNumber);
    }

    void displayPersonalInfo() {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Phone Number: " << phoneNumber << endl;
    }
};

class AcademicInfo : public PersonalInfo {
private:
    int studentClass;
    int rollNumber;
    char section;
public:
    void readAcademicInfo() {
        cout << "Enter class: ";
        cin >> studentClass;
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter section: ";
        cin >> section;
        cin.ignore(); // clear input buffer
    }

    void displayAcademicInfo() {
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Section: " << section << endl;
    }
};

class ExamInfo : public AcademicInfo {
private:
    int marks1, marks2, marks3;
public:
    void readExamInfo() {
        cout << "Enter marks in Subject 1: ";
        cin >> marks1;
        cout << "Enter marks in Subject 2: ";
        cin >> marks2;
        cout << "Enter marks in Subject 3: ";
        cin >> marks3;
        cin.ignore(); // clear input buffer
    }

    void displayExamInfo() {
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
        cout << "Marks in Subject 3: " << marks3 << endl;
    }
};

class StudentMultilevel : public ExamInfo {
public:
    void readData() {
        readPersonalInfo();
        readAcademicInfo();
        readExamInfo();
    }

    void displayData() {
        displayPersonalInfo();
        displayAcademicInfo();
        displayExamInfo();
    }
};

// Main Function
int main() {
    cout << "---- Single Inheritance (Dog) ----" << endl;
    Dog dog1;
    dog1.eat();
    dog1.sleep();
    dog1.bark();

    cout << "\n---- Single Inheritance (Student) ----" << endl;
    StudentSingle student1;
    student1.print();

    cout << "\n---- Multiple Inheritance ----" << endl;
    StudentMultiple student2;
    student2.print();

    cout << "\n---- Multilevel Inheritance ----" << endl;
    StudentMultilevel student3;
    student3.readData();
    cout << "\n--- Student Info ---" << endl;
    student3.displayData();

    return 0;
}

