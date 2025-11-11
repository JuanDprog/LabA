//(DE MANUEL, JUAN FERNANDO L. DIT 1-2)
#include <stdio.h>

int main(void){

int num1 = 1;
int num2 = 1;

printf("==While loop==\n");
while (num1 <= 10)
{
    printf("%d ", num1);
    num1++;
}

printf("\n");

printf("==For loop==\n");

for(int num1 = 2; num1 <= 20; num1 += 2 )
{
    printf("%d ", num1);
}
printf("\n");

printf("==do/while loop==\n");

do{
    printf("%d ", num2);
    num2++;
}
while (num2 <=5);

return 0;
}