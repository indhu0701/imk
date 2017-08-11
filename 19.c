#include <stdio.h>
int main()
{
    int k, a;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d",&n);

    // show error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");

    else
    {
        for(a=1; a<=n; ++i)
        {
            factorial *= a;              // factorial = factorial*a;
        }
        printf("Factorial of %d = %llu", k, factorial);
    }

    return 0;
}
