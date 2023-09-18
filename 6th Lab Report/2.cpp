/*====write a c++ program have a 3 overloaded constructor like "STUDENT(int id, string name, string dept, string section)", "STUDENT(int id, string name, string dept)", "STUDENT(int id, string name, double cgpa)", those value is taken as a input in main function and pass into 3 constructor three function display1stConstructorInfo( ), display2ndConstructorInfo( ),display3rdConstructorInfo( ), to display 3 constructor passing value  ===*/

#include <iostream>
using namespace std;

class STUDENT
{
    int i;
    string n, d, s;
    double c;

public:
    STUDENT(int id, string name, string dept, string section)
    {
        i = id;
        n = name;
        d = dept;
        s = section;
    }
    void display1stConstructorInfo()
    {
        cout << "ID: " << i << endl;
        cout << "Name: " << n << endl;
        cout << "Department: " << d << endl;
        cout << "section: " << s << endl;
    }
    STUDENT(int id, string name, string dept)
    {
        i = id;
        n = name;
        d = dept;
    }
    void display2ndConstructorInfo()
    {
        cout << "\nID: " << i << endl;
        cout << "Name: " << n << endl;
        cout << "Department: " << d << endl;
    }
    STUDENT(int id, string name, double cgpa)
    {
        i = id;
        n = name;
        c = cgpa;
    }
    void display3rdConstructorInfo()
    {
        cout << "\nID: " << i << endl;
        cout << "Name: " << n << endl;
        cout << "Department: " << d << endl;
        cout << "CGPA: " << c << endl;
    }
};

int main()
{
    STUDENT obj1(1, "SOHEL", "CSE", "B"), obj2(2, "FAHIM", "CSE"), obj3(3, "FEROZ", 3.85);
    obj1.display1stConstructorInfo();
    obj2.display2ndConstructorInfo();
    obj3.display3rdConstructorInfo();
}