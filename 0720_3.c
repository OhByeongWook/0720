#include <stdio.h>

int main()
{
    int num1, num2;
    int result=0;

    printf("input num1: ");
    scanf("%d",&num1);
    printf("input num2:  ");
    scanf("%d",&num2);

    result = num1 + num2;

    printf("\n\nResult==========\n");
    printf("%d + %d = %d", num1, num2, result);
    
}