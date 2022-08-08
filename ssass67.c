// 7. Write a program to count digits in a given number
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
   long long int i, num, count = 0;
    system("cls");

    printf("Enter the number : ");
    scanf("%lld", &num);
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    printf("No of digits are %lld",count);

    getch();
    return 0;
}