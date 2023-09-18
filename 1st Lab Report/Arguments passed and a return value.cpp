//ARGUMENTS PASSED AND RETURN A VALUE
#include <iostream>
using namespace std;

int sum(int a, int b);

int main()
{
    int x, y;
    cout << "Enter your two integer number: " << endl;
    cin >> x >> y;
    int z = sum(x, y);
    cout << "Sum: " << z << endl;

    return 0;
}
int sum(int a, int b)
{
    return a + b;
}
