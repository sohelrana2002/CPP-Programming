//PROGRAM WITH CLASS
#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int id;
    double cgpa;
};

int main()
{
    Student sohel;
    sohel.name = "SOHEL RANA";
    sohel.id = 222311057;
    sohel.cgpa = 3.78;

    cout << "Student Name: " << sohel.name << endl;
    cout << "Student ID: " << sohel.id << endl;
    cout << "Student CGPA: " << sohel.cgpa << endl;

    return 0;
}
