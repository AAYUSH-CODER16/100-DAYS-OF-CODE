#include <stdio.h>
int main()
{
    int n, first, last, temp, divisor = 1, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    last = n % 10;

    while (n >= 10)
    {
        n = n / 10;
        divisor = divisor * 10;
    }

    first = n;

    result = last * divisor + (temp % divisor - last) + first;

    printf("Number after swapping = %d", result);

    return 0;
}
