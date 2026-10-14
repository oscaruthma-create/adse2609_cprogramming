//c program that accepts two numbers, sums them & displays their sum.

//pre-processor directive
#include <stdio.h>

//main function provided the entry point to the program/application
int main()
{
    //variables to be used in the program
    int num1, num2, sum;

    //prompt the user for the variable to be added
    printf("please enter the value of the first number to be added;\n");
    //read in the value of the first number
    scanf("%d",&num1);

    //prompt the user for the variable to be added
    printf("please enter the value of the second number to be added;\n");
           scanf("%d",&num2);
           //add the two numbers and assign the result to sum
           sum = num1 + num2;
           printf("\n%d + %d = %d\n", num1, num2, sum);

}
