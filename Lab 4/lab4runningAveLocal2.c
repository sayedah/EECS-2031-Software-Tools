/***************************************
* EECS2031M � Lab 4
* Author: Hussain, Sayeda
* Email: sayedah@my.yorku.ca
* eecs_username: sayedah
* York Student #: 215427214
****************************************/
#include <stdio.h>

void r_avg(int);

int main(int argc, char *argv[])
{

   int input;
   printf("Enter number (-1 to quit): ");
   scanf("%d", &input);

   while (input != -1){
        r_avg(input);

        printf("\nEnter number (-1 to quit): ");
        scanf("%d", &input);
    }

    return 0;
}

void r_avg(int input)
{
    int static count;
    int static sum;
    count++;
    sum += input;
    double resu = sum / count;
    printf("running average is %d / %d = %.3f\n", sum, count, resu);
}
