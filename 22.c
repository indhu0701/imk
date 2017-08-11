#include <stdio.h>
 
int gcd(int c, int b)
{
    if (c == 0 || b == 0)
       return 0;
    if (c == b)
        return c;
    if (c > b)
        return gcd(c-b, b);
    return gcd(c, b-c);
}
 
int main()
{
    int c = 98, b = 56;
    printf("GCD of %d and %d is %d ", c, b, gcd(c, b));
    return 0;
}
