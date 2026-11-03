/*this program asks/prompt the user for their name, reads the input
 from the console, and displays a greeting message.*/

 //pre-processor directive
 #include <stdio.h>

 int main()
 {

  //character array to the user's name
  char name[80];

  //prompt the user's for their name
  printf("please enter your name:\n");

  //read in user name
  gets(name);

  //great the user
  printf("\nhello\"%g\" from c programming!", name);

  return 0;
 }
