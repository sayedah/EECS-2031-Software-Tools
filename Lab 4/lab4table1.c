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
    char inputs_table [ROWS][COLUMNS];
    char name[10]; char ageS[10]; char rateS[10];

    int rowCount = 0;
    int i; int j = 0;
    int age; float rate;

    printf("Enter name age and rate: ");
    scanf("%s %s  %s", name, ageS, rateS);

    while (strcmp(name, "xxx") != 0)
    {
      sprintf(inputs_table[rowCount], "%s %s %s", name, ageS, rateS);
      rowCount++;

      i = 0;
      while (i <= strlen(name)) {
        if (name[i] >= 'a' && name[i] <= 'z')
          name[i] -= ' ';
          i++;
      }

      age = atoi(ageS);
      rate = atof(rateS);
      age += 10;
      rate += (rate / 2);

      sprintf(inputs_table[rowCount], "%s %d %.2f", name, age, rate);
      rowCount++;

      printf("Enter name age and rate: ");
      scanf("%s %s  %s", name, ageS, rateS);
    }

    printf("\nRecords generated in %s on %s %s\n", __FILE__, __DATE__, __TIME__);
    while (j < rowCount) {
      printf("row[%d]: %s\n", j, inputs_table[j]);
      j++;
    }

     return 0;
}
