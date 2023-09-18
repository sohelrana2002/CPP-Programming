//ARGUMENTS PASSED AND NO RETURN A VALUE
#include <iostream>
    using namespace std;

void sum(int a, int b);

int main()
{
    int x,y;
    cout << "Enter your two integer number: " <<endl;
    cin >> x >> y;
    sum(x,y);



    return 0;
}
void sum(int a, int b)
{
    int z;
    z = a+b;
    cout << "Sum: " <<z <<endl;
}

