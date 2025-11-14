#include <stdio.h>

int main(void)

{
int choice;
float kg;
float lbs;  

 printf("weight conversion calculator: \n");
 printf("1. Kg to Lbs \n");
 printf("2. Lbs to Kg \n");
 printf("Enter your choice (1 or 2):");

 scanf("%d", &choice );

 if (choice == 1)
 {
    printf("Enter the weight in KG: \n");
    scanf("%f", &kg);
    
    lbs = kg * 2.2;
    printf("The weight in LBS is %.2f \n", lbs);
 }

 else if (choice == 2)
 {
 
    printf("Enter the weight in LBS:");
    scanf("%f", &lbs);
    
    kg = lbs / 2.2;
    printf("The weight in KG is %.2f", kg);
 
 }

 else {
    printf("you fuckign nigga only choose between 1 and 2");
 }


    return 0;

}