/***************************************
* EECS2031M – Lab1 
* Author: Hussain, Sayeda 
* Email: sayedah@my.yorku.ca 
* eecs_username: sayedah 
* York Student #: 215427214
****************************************/
#include <stdio.h>


int main()
{
   float sum(float a, float b);
   float x, y;
   printf("Enter two float numbers separated by ##: ");
   scanf("%f##%f", &x, &y);
   float su= sum(x,y);
   printf( "%f and %f = %f\n", x,y, su);

   return 0;

}

/* function definition */
float sum (float i, float j){
   return i+j;
}
