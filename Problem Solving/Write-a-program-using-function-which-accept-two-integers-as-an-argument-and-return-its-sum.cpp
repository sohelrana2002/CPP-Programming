#include <iostream>
using namespace std;
int sum(int a, int b);
int main()
{
	int x, y, s;
	cout << "Enter first number : ";
	cin >> x;
	cout << "Enter second number : ";
	cin >> y;
	s = sum(x, y);
	cout << "The sum is : " << s;
	return 0;
}
int sum(int a, int b)
{
	int total;
	total = a + b;
	return total;
}
