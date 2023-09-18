/*Hashmat is a brave warrior who with his group of young soldiers moves from one place to another to
fight against his opponents. Before Fighting he just calculates one thing, the difference between his
soldier number and the opponent’s soldier number. From this difference he decides whether to fight or
not. Hashmat’s soldier number is never greater than his opponent */

#include <stdio.h>
int main()
{
    long long int h, o;
    while (scanf("%lld %lld", &h, &o) != EOF)
    {
      long long int d = o - h;
      long long int x = h - o;
        if (h < o) {
            printf("%lld\n", d);
        } else printf("%lld\n",x);
    }
    return 0;
}