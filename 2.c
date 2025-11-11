// (DE MANUEL, JUAN FERNANDO L. DIT 1-2)
#include <stdio.h>

int main(void) {

int x = 5;
float y = 10;
int z;

printf("==ARTIMETHIC OPERATIONS== \n");
printf("\n");
printf("Addition: %d + %.0f = %.1f \n",x, y, x + y); 
printf("Subtraction: %.0f - %.d = %.1f \n",y, x, y - x);
printf("Multiplication: %d * %.0f = %.1f \n",x, y, x * y);
printf("Division: %d / %.0f = %.1f \n",x, y, x / y);
printf("\n");



printf("==LOGICAL OPERATIONS== \n");
printf("\n");
printf("AND\n");
printf("(y > x) && (x < y): %d \n", (y > x) && (x < y));
printf("(x > y) && (y < x): %d \n", (x > y) && (y < x));
printf("OR\n");
printf("(y > x) || (x > y): %d \n", (y > x) || (x > y));
printf("(y < x) || (x > y): %d \n", (y < x) || (x > y));
printf("NOT\n");
printf("!(x == 5): %d\n", !(x == 5));
printf("!(x == 6): %d\n", !(x == 6));  
printf("\n");

printf("==ASSIGNMENT OPERATIONS== \n");
printf("z = 5:  %d(initial value)\n", z = 5 );
printf("z += x:  %d\n", z += x );
printf("z -= 2:  %d\n", z -= 2 );
printf("z *= 3:  %d\n", z *= 3 );
printf("z /= 4:  %d\n", z /= 4 );
printf("z %%= 5:  %d\n", z %= 5 );

return 0;

}