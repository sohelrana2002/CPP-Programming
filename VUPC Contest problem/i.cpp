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
using namespace std;

int main()
{
    int T;
    cin >> T;
    int x;
    int c=0;
    while (T--)
    {
        cin >> x;
        c = x/7;
        if(x%7==0){
            c = c+0;
           cout << c << endl; 
        }else{
            c = c+1;
        cout << c << endl;
        }
        
    }

    return 0;
}
// int t = scan.nextInt();
// 		int count = 0;	// roll 갯수
// 		for(int tc=0; tc<t; tc++) {
// 			int x = scan.nextInt();
// 			/* 주사위 중 가장 큰 7로 최대한 점수 맞춘다. */
// 			count = x / 7;
// 			/* 나누어 떨어지지 않을경우 주사위 1번 더굴려야함. */
// 			count += (x%7 == 0) ? 0 : 1;