//GET CURRENT BILL INFORMATION
#include <iostream>
using namespace std;

class CurrentBill
{
private:
    string billingNo;
    int unit;
    int tbill;

public:
    void input()
    {
        cout << "Enter your Current Bill Information \n"
             << endl;
        cout << "Enter your Bulling Number: \n";
        cin >> billingNo;
        cout << "Enter your Unit: \n";
        cin >> unit;
        cout << "Enter your Total Bill: \n";
        cin >> tbill;
    }
    void output()
    {
        cout << "Congrats Your Billing Information is submitted" << endl;
        cout << "Your Bulling nUmber: " << billingNo << endl;
        cout << "Your Unit: " << unit << endl;
        cout << "Your Total Bill: " << tbill << endl;
    }
};

int main()
{
    CurrentBill a;
    a.input();
    a.output();
}
