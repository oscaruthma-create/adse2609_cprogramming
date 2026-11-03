/*this program accepts the base and the height of a
right-angled triangle,calculates and displays its area and perimeter.*/

 //pre-processor directive
 #include <stdio.h>
 #include <math.h>


 //main function provide the entry point to the program

 int main()
 {

  //variables to be used in the program
  float base, height,area,perimeter;



  //prompt the user for the  base of the triangle
  printf("please enter the base of the triangle in cm.\n");
  scanf("%f",&base);

  //calculate the user for the height of the triangle
  printf("please enter the height of the triangle in cm. \n ");
  scanf("%f",&height);



  //calculate the triangle's hypotenuse
  float  hypotenus = sqrt((pow(height,2)+ pow(base,2)));


  //calculate the area
  area = .5 * base  * height;
  perimeter= base+height+hypotenus;

  //display the triangle's deimensions
  printf("\nright angle's dimentions");
  printf("\n----------------------------------");
  printf("\n%-13s:%6.2f cm.","base",base);
  printf("\n%-13s:%6.2f cm.","height",height);
  printf("\n%-13s:%6.2f cm^2.","area",area);
   printf("\n%-13s:%6.2f cm.","perimeter",perimeter);



  printf("\n----------------------------------");




  return 0;
 }
