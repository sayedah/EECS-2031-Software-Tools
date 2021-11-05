/***************************************
* EECS2031M Lab 5
* Author: Hussain, Sayeda
* Email: sayedah@my.yorku.ca
* eecs_username: sayedah
* York Student #: 215427214
****************************************/
#include <stdio.h>
#include <math.h>

double my_pow(double, double);

int main(int argc, char *argv[])
{
   int base, exponent;
   printf("enter base and power: ");
   scanf("%d %d", &base, &exponent);

   while (base != -100){
        double res = pow(base, exponent);
        double res2 = my_pow(base, exponent);
        printf("pow:    %.4f\n", res);
        printf("my_pow: %.4f\n", res2);
        printf("enter base and power: ");
        scanf("%d %d", &base, &exponent);


    }

    return 0;
}

// this function should be RECURSIVE
// should not use any loop here
double my_pow(double base, double power)
{
  if (power == 0)
    return 1;
  else if (power > 0)
    return base * my_pow(base, power-1);
  else {
    return 1 / my_pow(base, -power);
  }


}
