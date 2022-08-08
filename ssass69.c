// 9. Write a program to calculate LCM of two numbers
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, a, b;
    system("cls");

    printf("Enter the two numbers : ");
    scanf("%d%d", &a, &b);

    if (a > b)
    {
        for (i = b; i <= a * b; i++)
        {
            if (i % a == 0 && i % b == 0)
            {
                break;
            }
        }
        printf("%d is the lcm of %d and %d", i, a, b);
    }
    else
    {
        for (i = a; i <= a * b; i++)
        {
            if (i % a == 0 && i % b == 0)
            {
                break;
            }
        }
        printf("%d is the lcm of %d and %d", i, a, b);
    }

    getch();
    return 0;
}