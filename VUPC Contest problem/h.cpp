/* Company XYZ have been badly hit by recession and is taking
a lot of cost cutting measures. Some of these measures include
giving up office space, going open source, reducing incentives,
cutting on luxuries and issuing pink slips.
They have got three (3) employees working in the accounts
department and are going to lay-off two (2) of them. After a
series of meetings, they have decided to dislodge the person
who gets the most salary and the one who gets the least. This
is usually the general trend during crisis like this.
You will be given the salaries of these 3 employees working
in the accounts department. You have to find out the salary
of the person who survives.
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int salaries[] = {x, y, z};
        sort(salaries, salaries + 3);
        cout << "Case " << i << " : " << salaries[1] << endl;
    }

    return 0;
}