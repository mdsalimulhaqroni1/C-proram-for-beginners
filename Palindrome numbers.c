#include<stdio.h>
int main()
{
    int num, temp, r, sum = 0;
    printf("Enter any numbers:\n");
    scanf("%d", &num);

    temp = num;

    while (temp!= 0)
    {
        r = temp % 10;
        sum = sum * 10 + r;
        temp = temp / 10;
    }
    if (num == sum)
    printf("Palindrome number\n");
    else
        printf("Not palindrome\n");
}

