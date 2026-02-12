#include <stdio.h>

int main()
{
    int a, b, c;
    int big, med, small;

    printf("Enter the a, b, c values:\n");
    scanf("%d %d %d", &a, &b, &c);

    /* Find big, medium, and small */
    if (a >= b && a >= c)
    {
        big = a;
        if (b >= c)
        {
            med = b;
            small = c;
        }
        else
        {
            med = c;
            small = b;
        }
    }
    else if (b >= a && b >= c)
    {
        big = b;
        if (a >= c)
        {
            med = a;
            small = c;
        }
        else
        {
            med = c;
            small = a;
        }
    }
    else
    {
        big = c;
        if (a >= b)
        {
            med = a;
            small = b;
        }
        else
        {
            med = b;
            small = a;
        }
    }

    /* Check Arithmetic Progression */
    if (big - med == med - small)
        printf("true");
    else
        printf("false");

    return 0;
}