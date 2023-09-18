// NO ARGUMENTS PASSED AND RETURN A VALUE
#include <iostream>
using namespace std;

int sum();

int main()
{
    int z = sum();
    cout << "Sum: " << z;

    return 0;
}
int sum()
{
    int a, b;
    cout << "Enter your two integer number: " << endl;
    cin >> a >> b;
    return a + b;
}
