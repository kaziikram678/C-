#include <stdio.h>
#include <limits.h>
#define cy printf("YES")
#define cn printf("NO")
#define ll long long int

int main()
{
    ll a, b, c, d, n, x, y, z;
    ll cnt = 0;
    scanf("%lld %lld %lld", &a, &b, &c);
    ll min = 0, min1 = 0;
    if (a <= b && a <= c)
        min = a;
    else if (b <= a && b <= c)
        min = b;
    else
        min = c;

    if (a == 0 || c == 0)
        printf("0");
    else
    {
        // printf("%d\n", min);
        x = a - min;
        y = c - min;
        // printf("%d %d\n", x, y);
        if (x < 0)
            x = 0;
        if (y < 0)
            y = 0;
        // printf("%d %d\n", x, y);
        if (x/2 <= y)
        {
            z = min + x / 2;
            printf("%lld", z);
        }
        else
        {
            z = min + y;
            printf("%lld", z);
        }
    }
}