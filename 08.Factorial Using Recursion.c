#include <stdio.h>

int fact_rec(int num); // function declaration

int main()
{
    int num;
    int result;
    printf("Enter the number :");
    scanf("%d", &num);
    result = fact_rec(num); // function call
    printf("Result =%d \n", result);
    return 0;
}

int fact_rec(int num) // function definition
{
    if (num == 1)
        return 1;
    else
        return num * fact_rec(num - 1);
}
```[cite: 10]
