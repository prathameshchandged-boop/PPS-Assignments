#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, g, h, i, j, sum;

    printf("Enter 10 numbers of your choice;");
    scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);

    sum = a + b + c + d + e + f + g + h + i + j;

    printf("Sum=%d", sum);

    return 0;
}
