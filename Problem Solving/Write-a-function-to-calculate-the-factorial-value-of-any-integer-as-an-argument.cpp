// Write a function to calculate the factorial value of any integer as an argument.
#include <iostream>
using namespace std;
int factorial(int);
int main()
{
	int x, f;
	cout << "Enter number : ";
	cin >> x;
	f = factorial(x);
	cout << "The factorial is :" << f;
	return 0;
}
int factorial(int a)
{
	int fact = 1;
	// while loop
	//  while(a>=1)
	//  {
	//  	fact=fact*a;
	//  	a--;
	//  }
	// for loop
	for (int i = a; i >= 1; i--)
	{
		fact = fact * a;
		a--;
	}
	return fact;
}
