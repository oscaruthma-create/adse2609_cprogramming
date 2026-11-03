/*this program acceots the radius of a circle from the user, calculates and displays
its area, and circumference,using in-built functions.*/

 //pre-processor directive
 #include <stdio.h>
 #include <math.h>
 #define MYPI 3.141593 //Define pi as a constant

 //main function provide the entry point to the program

 int main()
 {

  //variables to be used in the program
  float radius, area, circumference;


  //prompt the user for the circle's radius
  printf("please enter the radius of the circle in cm.\n");
  scanf("%f",&radius);

  //calculate the area and the circumference of the circle
  area = MYPI *pow(radius, 3);
  circumference = MYPI*(radius*2);


  //display the circle's dimentions
  printf("\nCircle's dimentions");
  printf("\n----------------------------------");
  printf("\n%-13s:%6.2f cm.","radius",radius);
  printf("\n%-13s:%6.2f cm.","area",area);
  printf("\n%-13s:%6.2f cm.","circumference",circumference);


  printf("\n----------------------------------");




  return 0;
 }
