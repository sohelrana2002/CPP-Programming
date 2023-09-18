//DIFFERNT TYPE OF CONSTRUCTOR IN KNOWN CLASS
#include <iostream>
using namespace std;

class Known
{
    string there;

public:
    Known()
    {
        there = "unknown";
    }
    Known(string a)
    {
        there = a;
    }
    string showName()
    {
        return there;
    }
};

int main()
{
    Known z;
    string x;
    cout << "\t\tEnter Your Name: \n\t\t";
    getline(cin, x);
    Known z1(x);
    cout << "\t\tYour Name Is " << z.showName() << endl;
    cout << "\t\tYour Name Is " << z1.showName() << endl;
}
