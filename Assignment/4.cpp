/*===1.	Write a C++ program to accept user name and password and throw an exception if the password requirements are not full filled.
Password requirements:
a)	At least 8 characters
b)	At least 1 lowercase character
c)	At least 1 uppercase character
d)	At least 1 digit
e)	At least 1 special character
[Use of library function for finding string length, checking uppercase, checking lowercase and checking digit are not allowed].
===*/

#include <iostream>
#include <conio.h>
using namespace std;

void ValidPassword()
{
    string userName;
    cout << "Enter username: ";
    cin >> userName;
    char password[50];
    cout << "Enter Password: ";
    cin >> password;

    int i = 0;
    int j = 0;
    int lowerCase = 0;
    int upperCase = 0;
    int digit = 0;
    int special = 0;

    try
    {
        while (password[i] != '\0')
        {
            if (password[i] >= 'a' && password[i] <= 'z')
            {
                lowerCase++;
            }
            else if (password[i] >= 'A' && password[i] <= 'Z')
            {
                upperCase++;
            }
            else if (password[i] >= '0' && password[i] <= '9')
            {
                digit++;
            }
            else
                special++;
            i++;
            j++;
        }
        if (j < 8 || lowerCase == 0 || upperCase == 0 || digit == 0 || special == 0)
        {
            throw 5;
        }

        else
        {
            cout << "This Password is valid";
        }
    }
    catch (int t)
    {
        if (j < 8)
        {
            cout << "password must be at least 8 character" << endl;
        }
        if (lowerCase == 0)
        {
            cout << "password must be at 1 least on lowercase character" << endl;
        }
        if (upperCase == 0)
        {
            cout << "password must be at 1 least on uppercase character" << endl;
        }
        if (digit == 0)
        {
            cout << "password must be at 1 least on digit " << endl;
        }
        if (special == 0)
        {
            cout << "password must be at 1 least on special character " << endl;
        }

        cout << "Try again" << endl;
        cout << "\n\n continue to any key" << endl;
        getch();
        ValidPassword();
    }
}

int main()
{
    ValidPassword();
}