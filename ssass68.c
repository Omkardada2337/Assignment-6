// 8. Write a program to check whether a given number is a Prime number or
// not
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, num;
    system("cls");

    printf("Enter the number : ");
    scanf("%d", &num);
    for (i = 2; i <= (num - 1); i++)
    {
        if (num % i == 0)
        {
            break;
        }
    }
    if (i == num)
    {
        printf("%d is the prime number", num);
    }
    else
    {
        printf("%d is not a prime number", num);
    }

    getch();
    return 0;
}