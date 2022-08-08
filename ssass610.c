// 10. Write a program to reverse a given number
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int num, t, z, i;
    system("cls");

    printf("Enter the number : ");
    scanf("%d", &num);
    i = num;
    while (num != 0)
    {
        t = num % 10;
        num /= 10;
        z = z * 10 + t;
    }
    printf("Reversed number of %d is %d", i, z);

    getch();
    return 0;
}