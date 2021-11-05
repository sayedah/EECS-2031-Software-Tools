/***************************************
* EECS2031M � Lab 4
* Author: Hussain, Sayeda
* Email: sayedah@my.yorku.ca
* eecs_username: sayedah
* York Student #: 215427214
****************************************/
#include <stdio.h>
#include <math.h>

#define SIZE 10
#define SIZE2 40

int main(int argc, char *argv[])
{
     char input[SIZE2];
     char name[SIZE];
     int age;
     float rate;
     double f;
     double c;
     char resu[SIZE2];

     printf("Enter name, age and rate (or \"exit\"): ");
     fgets(input, 40, stdin);

     while (strcmp(input, "exit\n") != 0)
     {
       sscanf(input, "%s %d %f", name, &age, &rate);
       if (name[0] >= 'a' && name[0] <= 'z')
          name[0] = name[0] - ' ';

       age += 10;

       rate *= 2.0;

       f = floor(rate);
       c = ceil(rate);

       sprintf(resu, "%s-%d-%.3f-[%.0f,%.0f]", name, age, rate, f, c);

       //output original input using two functions.
       printf("%s", input);  // no \n needed
       fputs(input, stdout);
       printf("%s\n", resu);

       printf("\nEnter name, age and rate (or \"exit\"): ");
       fgets(input, 40, stdin);

     }
      return 0;
}
