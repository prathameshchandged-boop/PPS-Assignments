#include <stdio.h>
//CALL BY REFERENCE / CALL BY ADDRESS

void swap_numbers(int*num1,int *num2);
//void swap_numbers(int *,int *); //valid
int main()
{
    int num1, num2;
    printf("Enter The First Number:");
    scanf("%d",&num1);
    printf("Enter The Second Number:");
    scanf("%d",&num2);

    printf("BEFORE SWAP :: NUM1 =%d num2=%d\n",num1,num2);
    swap_numbers(&num1,&num2); //call by REFERENCE
    printf("AFTER SWAP::num1 =%d num2=%d\n",num1,num2);

    return 0;

}

void swap_numbers(int* num1, int* num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
```[cite: 2]
