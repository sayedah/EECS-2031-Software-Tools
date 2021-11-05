/***************************************
* EECS2031M Lab 6
* Author: Hussain, Sayeda
* Email: sayedah@my.yorku.ca
* eecs_username: sayedah
* York Student #: 215427214
****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printArr(int *, int);

int  main()
{
  char *p;
  int *my_array;
  int n, i;
  printf("# of elements in int array: ");
  scanf("%d", &n);

  my_array = (int *) malloc(n * sizeof(int));

  if (my_array == NULL) {
    printf("Memory Allocation failed. Bye!\n");
    exit(0);
  }


  *(my_array + 0) = -10;
  for (i = 1; i < n; i++)
    *(my_array + i) = i * 100;

  printArr(my_array, n);
  printf("\n");

  p = malloc(6 * sizeof(char));
  strcpy(p, "hello");
  printf("%s %d\n", p, strlen(p));
  *(p+2) = 'X';
  printf("%s\n", p);



  return 0;
}




void printArr(int *arr, int n) {
  int i;
  for (i = 0; i < n; i++)
    printf("[%d]: %d\n", i, *(arr+i));

}
