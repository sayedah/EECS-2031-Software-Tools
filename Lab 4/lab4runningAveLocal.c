/***************************************
* EECS2031M � Lab 4
* Author: Hussain, Sayeda
* Email: sayedah@my.yorku.ca
* eecs_username: sayedah
* York Student #: 215427214
****************************************/
#include <stdio.h>

void r_avg(int, int);

int main(int argc, char *argv[])
{
      int input; int count=0; int sum=0;
      double resu;

      printf("Enter number (-1 to quit):  ");
      scanf("%d", &input);

      while(input != -1)
      {
        count++;
        sum += input;
        r_avg(sum, count);

        printf("\nEnter number (-1 to quit):  ");
        scanf("%d", &input);
       }
       return 0;
}

void r_avg(int sum, int count)
{
   double resu = sum / count;
   printf("running average is %d / %d = %.3f\n", sum, count, resu);
}
