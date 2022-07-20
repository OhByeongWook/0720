#include <stdio.h>

int main()
{
    int num1, num2;
    int result;

    printf("지수승을 구하는 프로그램\n");
    printf("첫번째 수 입력: ");
    scanf("%d",&num1);
    printf("두번째 수 입력");
    scanf("%d",&num2);

    result = num1 * num1 * num1 * num1 * num1 * num1 * num1 * num1;
    printf("%d*%d*%d*%d*%d*%d*%d*%d = %d",
          num1,num1,num1,num1,num1,num1,num1,num1,result);


}