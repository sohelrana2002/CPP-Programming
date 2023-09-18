//You are given a list of T integers, for each of them you have to calculate the number of occurrences of the digit 4 in the decimal representation.

#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for(int i = 0 ; i < T ; i++)
    {
        int j;
        cin >> j;
        int x = 0;
        while(j > 0)
        {
            if(j % 10 == 4)
            {
                x = x + 1;
            }
            j = j / 10;
        }
        cout << x <<endl;

    }
    return 0;
}
