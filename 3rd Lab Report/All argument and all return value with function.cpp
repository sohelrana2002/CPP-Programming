//ALL ARGUMENTS AND RETURN TYPE RESULT USING DIFFERENT FUNCTION
#include <iostream>
using namespace std;
void sum();
int sub();
void multi(int a, int b);
int divi(int a, int b);

int main()
{
    sum();
    int y = sub();
    cout << "Sub: " << y << endl;
    int k, m;
    cout << "Enter your two integer number: " << endl;
    cin >> k >> m;
    multi(k, m);
    int z = divi(k, m);
    cout << "Division: " << z << endl;
}

// No argument No return value
void sum()
{
    int a, b;
    cout << "Enter your two integer number: " << endl;
    cin >> a >> b;
    int x = a + b;
    cout << "Sum: " << x << endl;
}
// No argument with return value
int sub()
{
    int a, b;
    cout << "Enter your two integer number: " << endl;
    cin >> a >> b;
    int x = a - b;
    return x;
}

// argument with no return value
void multi(int a, int b)
{
    int x = a * b;
    cout << "Multiplication: " << x << endl;
}
// argument with return value
int divi(int a, int b)
{

    int l = a / b;
    return l;
}
