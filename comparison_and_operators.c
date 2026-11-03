/*this program demonstrates the various comparison and logical operators in c
to compare two integers and display the result.

NB: Comparison operators produce 1 for "true" and 0 for "false" */

 //pre-processor directive
 #include <stdio.h>

 int main()
 {

  //variables to be used in the program
  int firstNum =10,secondNum =7;

  //display the values of the above variables
  printf("value of the 'firstNum' and 'secondNum' are %d respectively.", firstNum, secondNum);



  //demostrate the various comparison operators
  prinf("\nCOMPARISON OPERATORS");
  printf("\n==========================================");


  //equal to '=='operator
  prinf("\n%d equal to (==) %d? %d",firstNum, secondNum, firstNum == secondNum);
  //not equal to '!=' operator
  prinf("\n%d not equal to (!=) %d? %d",firstNum, secondNum, firstNum != secondNum);
  //greater than or equal to '>=' operator
  prinf("\n%d greater than or equal to (>=) %d? %d",firstNum, secondNum, firstNum >= secondNum);
  //greater than '>'
  prinf("\n%d greater than (>) %d? %d",firstNum, secondNum, firstNum > secondNum);
  //less than '<'
  prinf("\n% less than (<) %d? %d",firstNum, secondNum, firstNum < secondNum);
  //less than or equaL to '<='
  prinf("\n%d less than or equal to (<=) %d? %d",firstNum, secondNum, firstNum <= secondNum);
  printf("\n==========================================");





  return 0;
 }
