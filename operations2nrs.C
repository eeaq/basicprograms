#include<stdio.h>
#include<stdlib.h>

int main()
{
   int number1 = 0;
   int number2 = 0;
   int sum = 0;
   int difference = 0;
   int multiplication = 0;
   float division = 0;
   int modulus = 0;

   printf("Enter the first number: ");
   scanf("%d", &number1);
   printf("Enter the second number: ");
   scanf("%d", &number2);

   sum = number1+number2;
   difference = number1-number2;
   multiplication = number1*number2;
   division = number1/number2;
   modulus = number1%number2;
   printf("Sum = %d",sum);
   printf("Difference = %d", difference);
   printf("Multiplication = %d",multiplication);
   printf("Division = %d",division);
   printf("Modulo = %d",modulo);

   system("pause");

   return 0;
}