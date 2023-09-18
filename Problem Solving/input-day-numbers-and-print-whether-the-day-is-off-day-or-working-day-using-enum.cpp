// input day numbers and print whether the day is  off day or working day using enum
#include <iostream>
#include <conio.h>
using namespace std;

enum week
{
    sun = 2,
    mon = 3,
    tue = 4,
    wed = 5,
    thu = 6,
    fri = 7,
    sat = 1
}; // enum is like a class [user define detatype]

int main()
{
    int today;
    cout << "Enter your days number: " << endl;
    cin >> today;
    week x; // creating object like class object
    x = fri;
    //(today == x)? cout << "Today is off day" : (today > 7)? cout << "Your day must be under 8" : cout << "To day is working day"; //ternary operator

    if (today == x)
        cout << "Today is off day" << endl;
    else if (today > 7)
    {
        cout << "Your day must be under 8" << endl;
        cout << "Continue to any key: " << endl;
        getch();

        main();
    }
    else
        cout << "To day is working day" << endl;

    return 0;
}
