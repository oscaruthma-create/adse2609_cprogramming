/*this program demonstrates the various arithmetic operators in c*/

 //pre-processor directive
 #include <stdio.h>

 int main()
 {

  //variables to be used in the program
  int firstNum =8,secondNum =5;

  //display the values of the above variables
  printf("value of the 'firstNum' and 'secondNum' are %d respectively.", firstNum, secondNum);


  //perform the various arithmetic operation and display their results
  printf("\n%15s: %d+%d = %2d","addition", firstNum, secondNum, firstNum + secondNum);
  printf("\n%15s: %d-%d = %2d", "subtraction",firstNum, secondNum, firstNum - secondNum);
  printf("\n%15s: %d×%d = %2d", "multiplication",firstNum, secondNum, firstNum * secondNum);
  printf("\n%15s: %d÷%d = %2d", "division",firstNum, secondNum, firstNum / secondNum);
  printf("\n%15s: %d%%d = %2d", "modulus",firstNum, secondNum, firstNum % secondNum);





  return 0;
 }
