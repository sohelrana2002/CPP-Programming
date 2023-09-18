// NO ARGUMENTS PASSED AND NO RETURN A VALUE
#include <iostream>
using namespace std;

void sum();

int main()
{

    sum();

    return 0;
}
void sum()
{
    int a, b, x;
    cin >> a >> b;
    x = a + b;
    cout << "sum: " << x << endl;
}
