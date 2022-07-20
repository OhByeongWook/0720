#include <stdio.h>

int main()
{
   int num1, num2, num3; // num1, num2, num3는 과목1, 과목2, 과목3
   float result;

    //데이터 입력
    printf("input num1: ");
    scanf("%d",&num1);
    printf("input num2: ");
    scanf("%d",&num2);
    printf("input num3: ");
    scanf("%d",&num3);

    printf("\n\nResult(Total, Average)===========\n");
    result = num1 + num2 + num3;
    printf("1.Total :  ");
    printf("\t%d + %d + %d =%3.0f\n", num1, num2, num3, result);

    result = result / 3; 
    printf("2.Average :  ");
    printf("%3.2f", result );


}
