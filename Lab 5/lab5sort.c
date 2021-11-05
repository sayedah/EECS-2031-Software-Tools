/***************************************
* EECS2031M Lab 5
* Author: Hussain, Sayeda
* Email: sayedah@my.yorku.ca
* eecs_username: sayedah
* York Student #: 215427214
****************************************/
#include <stdio.h>
#include <string.h>

#define SIZE 30
void sortArray(char *);

main() {
  char input[SIZE];
  fgets(input, SIZE, stdin);
  while(strcmp(input, "quit\n") != 0) {
    input[strlen(input)-1] = '\0';

    sortArray(input);
    printf("%s\n", input);

    printf("\n");
    fgets(input, SIZE, stdin);
  }
}


void sortArray(char *str) {
  int i; int j;
  int len = strlen(str);
  int smallest;

  for (i = 0; i <= len-2; i++) {
    smallest = i;
    for (j = i+1; j <= len-1; j++) {
      if (*(str+j) < *(str+smallest))
        smallest = j;
    }
    char temp = *(str+i);
    *(str+i) = *(str+smallest);
    *(str+smallest) = temp;
  }

}
