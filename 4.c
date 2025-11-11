//(DE MANUEL, JUAN FERNANDO L. DIT 1-2)
#include <stdio.h>

int main (void)
{
    
    int num1;

    printf("Enter a number:");
    scanf("%d", &num1);

    if (num1 % 2 == 0)
    {
        printf("%d is even\n", num1);
    }
    else
    {
        printf("%d is odd\n", num1);
    }
    
    return 0;
}