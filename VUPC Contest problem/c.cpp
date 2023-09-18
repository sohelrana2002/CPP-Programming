/* A palindromic number or numeral palindrome is a 'symmetrical' number like 19891, that remains the same when its digits are reversed. In this problem you will be given an integer, you have to say whether the number is a palindromic number or not. */

#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    int reverse = 0;
    while (n != 0)
    {
        reverse = reverse * 10 + (n % 10);
        n = n / 10;
    }
    return reverse;
}
int main()
{
    int T, n;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cin >> n;
        if(n == reverse(n))
        {
            cout << "Case " << i << ": Yes" <<endl;
        }
         else
         {
            cout << "Case " << i << ": No" <<endl;
         }
    }
    return 0;
}