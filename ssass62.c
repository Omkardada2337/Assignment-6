// 2. Write a program to calculate sum of first N even natural numbers
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, N, sum = 0;
    system("cls");

    printf("Enter the value of N : ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        sum = sum + 2 * i;
    }
    printf("Sum is %d", sum);
    getch();
    return 0;
}