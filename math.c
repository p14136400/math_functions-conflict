

#include <stdio.h>
 
int main()
{
   int first, second, add, subtract, multiply, count, n;
   float divide, number, sum, average;

   sum=0;
   count=0;
 
   printf("Enter two integers\n");
   scanf("%d%d", &first, &second);
 
   add        = first + second;
   subtract = first - second;
   multiply = first * second;
   divide     = first / (float)second;   //typecasting


    
   printf("Sum = %d\n",add);
   printf("Difference = %d\n",subtract);
   printf("Multiplication = %d\n",multiply);
   printf("Division = %.2f\n",divide);

   printf("Please enter a number from 1-5 to set how many numbers you want the average for: ");
if(n <= 5 && >= 1) {
   scanf("%d%d", &n);
}
else {
 printf("it must be between 1 and 5 ");
}
   while(count<n)
       {
    scanf("%f",&number);
    sum=sum+number;
    count=count+1;
       }
    average = sum+number;
    printf(" Average=%f",average);
 
   return 0;
}
