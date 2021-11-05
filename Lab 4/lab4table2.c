/***************************************
* EECS2031M � Lab 4
* Author: Hussain, Sayeda
* Email: sayedah@my.yorku.ca
* eecs_username: sayedah
* York Student #: 215427214
****************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define ROWS 20
#define COLUMNS 30

int main(int argc, char *argv[])
{
     char input_table[ROWS][COLUMNS];
     char name[10];
     int age;
     float rate;
     int i;
     int j = 0;

     int current_row = 0;

     printf("Enter name age and rate: ");
     fgets(input_table[current_row], 30, stdin);   // add a /n

     while(strcmp(input_table[current_row], "xxx\n") != 0)
     {
       sscanf(input_table[current_row], "%s %d %f", name, &age, &rate);
       current_row++;

       i = 0;
       while (i <= strlen(name)) {
         if (name[i] >= 'a' && name[i] <= 'z')
           name[i] -= ' ';
           i++;
       }
       age += 10;
       rate += (rate / 2);

       sprintf(input_table[current_row], "%s %d %.2f\n", name, age, rate);
       current_row++;

       printf("Enter name age and rate: ");
       fgets(input_table[current_row], 30, stdin);
     }

     printf("\nRecords generated in %s on %s %s\n", __FILE__, __DATE__, __TIME__);
     while (j < current_row) {
       printf("row[%d]: %s", j, input_table[j]);
       j++;
     }

     return 0;
}
