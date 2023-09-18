//GET BUSINESSMAN INFORMATION
#include <iostream>
using namespace std;

class BusinessMan
{
public:
    char nameArray[40];
    string position;
    int age, salary;

    void input()
    {
        cout << "Enter your Name: " << endl;
        cin.getline(nameArray, 40);
        cout << "Enter your Position: " << endl;
        cin >> position;
        cout << "Enter your Age: " << endl;
        cin >> age;
        cout << "Enter your Salary: " << endl;
        cin >> salary;
    }
    void output()
    {
        cout << "\n\n\nYour Name: " << nameArray << endl;
        cout << "Your Position: " << position << endl;
        cout << "Your Age: " << age << endl;
        cout << "Your Salary: " << salary << endl;
    }
};

int main()
{
    BusinessMan b1;
    b1.input();
    b1.output();

    return 0;
}
