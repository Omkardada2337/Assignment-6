// 6. Write a program to calculate factorial of a number
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
   long long int i, num, fac = 1;
    system("cls");

    printf("Enter the number : ");
    scanf("%lld", &num);
    if (num >= 1)
    {
        for (i = 1; i <= num; i++)
        {
            fac = fac * i;
        }
        printf("Factorial is %lld", fac);
    }
    else
    {
        printf("Factorial is %lld", 1);
    }

    getch();
    return 0;
}