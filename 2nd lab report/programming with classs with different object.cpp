//GET MOBILE PHONE INFORMATION
#include <iostream>
#include <string.h>
using namespace std;

class PhoneInfo
{
private:
    string bname, model;
    int price;

public:
    void input()
    {
        cout << "Enter your Phone Information" << endl;
        cout << "Enter your Phone Brand Name: " << endl;
        getline(cin, bname);
        cout << "Enter your Phone Model: " << endl;
        getline(cin, model);
        cout << "Enter your Phone's Market Value: " << endl;
        cin >> price;
    }
    void output()
    {
        cout << "Congrats Your Phone Information is submitted" << endl;
        cout << "Your Phone Brand Name: " << bname << endl;
        cout << "Your Phone Model: " << model << endl;
        cout << "Your Phone's Market Value: " << price << endl;
    }
};

int main()
{
    PhoneInfo a, c;
    a.input();
    c.input();
    a.output();
    c.output();

    return 0;
}
