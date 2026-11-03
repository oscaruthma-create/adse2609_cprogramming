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
  printf("value of the 'firstNum' and 'secondNum' %d are %d respectively.", firstNum, secondNum);



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

  //demonstrate the various logical operators
  printf("\nLOGICAL OPERATORS");
  printf("\n==========================================");

  //Logical and : evaluates to true when both expressions are true
  printf("\nLOGICAL AND (&&)");
  Printf("\n(%d > %d) && (%d > 0) = %d", firstNum, secondNum, firstNum,
    (firstNum > secondNum) && (firstNum>0));
    //logical or evaluates to true when atleast one expressions is true
    printf("\nLOGICAL 'OR' (||)");
    printf("n(%d < %d) || (%d < 0) = %d", firstNum, secondNum, firstNum,
        (firstNum < secondNum) || (firstNum<0));
        //logical or : reverses truth values of expression (true > false) & ( false>true)
        printf("\nLOGICAL NOT (!)");
    printf("n(%d < %d) = %d \n! (%d < %d) = %d", firstNum, secondNum,(firstNum < secondNum),
        firstNum, secondNum, ! ( firstNum<0));


        printf("\n==========================================");








  return 0;
 }
