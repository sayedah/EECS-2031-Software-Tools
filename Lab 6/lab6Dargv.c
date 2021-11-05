/***************************************
* EECS2031M Lab 6
* Author: Hussain, Sayeda
* Email: sayedah@my.yorku.ca
* eecs_username: sayedah
* York Student #: 215427214
****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getSum(char *[], int n);
int getDiff(char *[], int n);

int main(int argc, char *argv[]) {
  int i; int ans;
  printf("There are %d arguments (excluding \"a.out\")\n", argc-1);

  //Sum case
  if (strcmp(argv[1], "sum") == 0) {
    for (i = 2; i < argc-1; i++) {
      printf("%s %c ", argv[i], '+');
    }
    //print out the last number without a preceeding '+'
    printf("%s\n", argv[argc-1]);
    //call getSum
    ans = getSum(argv, argc);
  }

  //Diff case
  else {
    for (i = 2; i < argc-1; i++) {
      printf("%s %c ", argv[i], '-');
    }
    //print out the last number without a preceeding '-'
    printf("%s\n", argv[argc-1]);
    //call getDiff
    ans = getDiff(argv, argc);
  }

  printf("= %d\n", ans);

  return 0;
}



int getSum(char *arg[], int n) {
  int sum = 0; int i;
  for (i = 2; i <= n; i++) {
    int num = atoi(arg[i]);
    sum += num;
  }
  return sum;
}



int getDiff(char *arg[], int n) {
  int diff = atoi(arg[2]); int i;
  for (i = 3; i <= n; i++) {
    int num = atoi(arg[i]);
    diff -= num;
  }
  return diff;
}
