#include <iostream>
using namespace std;
int main()
{
    int x = 50;
    int y = 0;
    int i;
    double z;
    try
    {
        for (i = 1; i > 0; i++)
        {
            cout << "Value is  " << i << endl;
            throw i;
        }
    }
    catch (int e)
    {
        cout << "Throwing Exception occur " << endl;
    }

    return 0;
}
