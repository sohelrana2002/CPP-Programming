/*====write a program  to create a class like "MYPROBLEM" that has two function 1st function name is showArraySummation(int a[], int length) , 2nd function name is showArraySummation(int n) , 1st function find the summation of array element and 2nd function calculate factorial for any number , finally show the result==*/

#include <iostream>
using namespace std;

class MYPROBLEM
{
public:
    void showArraySummation(int a[], int length)
    {
        int sum = 0;
        for (int i = 0; i < length; i++)
        {
            sum = sum + a[i];
        }
        cout << "Summation of array is: " << sum << endl;
    }

    void showArraySummation(int n)
    {
        int factorial = 1;
        for (int i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }
        cout << "Factorial is: " << factorial << endl;
    }
};

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    MYPROBLEM obj1;
    obj1.showArraySummation(array, 5);
    obj1.showArraySummation(5);
}