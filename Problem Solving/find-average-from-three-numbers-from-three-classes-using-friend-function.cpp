// find average from three numbers from three classes using friend function
#include <iostream>
using namespace std;
class AverageA;
class AverageB; // declare global class
class AverageC;

class AverageA
{
    int a;

public:
    AverageA()
    {
        int x;
        cout << "Enter one number: " << endl;
        cin >> x;
        a = x;
    }

    friend float averageWorking(AverageA i, AverageB j, AverageC k);
};
class AverageB
{
    int b;

public:
    AverageB()
    {
        int y;
        cout << "Enter one number: " << endl;
        cin >> y;
        b = y;
    }

    friend float averageWorking(AverageA i, AverageB j, AverageC k);
};
class AverageC
{
    int c;

public:
    AverageC()
    {
        int z;
        cout << "Enter one number: " << endl;
        cin >> z;
        c = z;
    }

    friend float averageWorking(AverageA i, AverageB j, AverageC k);
};
float averageWorking(AverageA i, AverageB j, AverageC k)
{
    float avg = (i.a + j.b + k.c) / 3.00;
    return avg;
}

int main()
{
    AverageA n;
    AverageB m;
    AverageC l;
    cout << "Average: " << averageWorking(n, m, l);
}