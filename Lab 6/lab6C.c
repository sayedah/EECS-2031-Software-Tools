/***************************************
* EECS2031M Lab 6
* Author: Hussain, Sayeda
* Email: sayedah@my.yorku.ca
* eecs_username: sayedah
* York Student #: 215427214
****************************************/

#include <stdio.h>
#include <string.h>
#define SIZE 11

void exchangeParr(char *[]);
void printParr(char *[], int );
void sortParr(char **, int );

main(){
  char * swap;
  char * inputs[SIZE] = {"giraffes are high 0", "mosquitos are annoying 1",
  "monkeys are smart 2", "kangaroos are ugly 3"};

  char arr1 [] = "dogs are friendly 4";
  char arr2 [] = "hippos are huge 5";
  char arr3 [] = "cobras are scary 6";
  char arr4 [] = "fox 7";
  char arr5 [] = "elephants are heavy 8";
  char arr6 [] = "hens 9";
  char arr7 [] = "bison 10";

  inputs[4] = arr1;
  inputs[5] = arr2;
  inputs[6] = arr3;
  inputs[7] = arr4;
  inputs[8] = arr5;
  inputs[9] = arr6;
  inputs[10] = arr7;

  printf("sizeof char*: %d, sizeof pointer array: %d\n\n", sizeof(char*), sizeof inputs );

  // display the array by calling printParr
  printParr(inputs, SIZE);

  // swap pointee of first and second element pointers

  swap = inputs[1];
  inputs[1] = inputs[0];
  inputs[0] = swap;

  // call exchangeParr() to swap some other 'rows';
  exchangeParr(inputs);

  // display the swapped array by calling printParr()
  printf("\n== after swapping ==\n");   printf("===========================\n");
  printParr(inputs, SIZE);


  // call sortParr()
  sortParr(inputs, SIZE);

  // display the sorted array by calling printParr()
  printf("\n== after sorting ==\n");   printf("===========================\n");
  printParr(inputs, SIZE);

}

void printParr(char * records[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("[%d] -*-> %s\n", i, *(records+i));
  }
  printf("\n");
}

void exchangeParr(char * records[]) {
  char * temp = records[2];
  records[2] = records[3];
  records[3] = temp;
}

void sortParr(char **records, int n) {
  int i, j, smallest;
  for (i = 0; i <= n-2; i++) {
    smallest = i;
    for (j = i; j <= n-1; j++) {
      char *arr1 = records[j];
      char *arr2 = records[smallest];
      if (strcmp(arr1, arr2) < 0)
        smallest = j;
    }
    char * temp = records[i];
    records[i] = records[smallest];
    records[smallest] = temp;
  }
}
