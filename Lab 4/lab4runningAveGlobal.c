/***************************************
* EECS2031M � Lab 4
* Author: Hussain, Sayeda
* Email: sayedah@my.yorku.ca
* eecs_username: sayedah
* York Student #: 215427214
****************************************/
#include <stdio.h>
extern void r_avg();
extern int sum;
extern int count;

int main(int argc, char *argv[])
{
    int input;

    printf("Enter number (-1 to quit): ");
    scanf("%d", &input);

    while(input != -1){
      count++;
      sum += input;

      r_avg();

      printf("\nEnter number (-1 to quit): ");
      scanf("%d", &input);
     }

     return 0;
}
