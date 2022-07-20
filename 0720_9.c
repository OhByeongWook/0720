#include <stdio.h>
int main()
{
    int a, b ; // 정수 2개 
    int result;
    
    printf("input a: ");
    scanf("%d",&a);
    printf("input b: ");
    scanf("%d",&b);

    printf("\n\n========Result========\n\n");

    printf("%d + %d = %d\n", a , b );
    printf("%d - %d = %d\n", a , b );
    printf("%d / %d = %d\n", a , b );
    printf("%d * %d = %d\n", a , b );

    return 0;

}