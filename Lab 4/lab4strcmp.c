/***************************************
* EECS2031M � Lab 4
* Author: Hussain, Sayeda
* Email: sayedah@my.yorku.ca
* eecs_username: sayedah
* York Student #: 215427214
****************************************/
#include<stdio.h>
#include<string.h>

#define SIZE 30
int my_strcmp(char[], char[]);

int main(){
   char a[SIZE];
   char b[SIZE];

   scanf("%s", a);
   scanf("%s",b);

   while (strcmp(a, "xxx") != 0 || strcmp(b, "xxx") != 0){
      int resu = strcmp(a,b);
       if (resu < 0) printf("strcmp:   \"%s\" appears earlier in dictionary than \"%s\"\n", a,b);
      else if (resu > 0) printf("strcmp:   \"%s\" appears later in dictionary than \"%s\"\n", a,b);
      else printf("\"%s\" and \"%s\" are same\n", a, b);

      int resu2 = my_strcmp(a,b);
      if (resu2 < 0) printf("mystrcmp: \"%s\" appears earlier in dictionary than \"%s\"\n\n", a,b);
      else if (resu2 > 0) printf("mystrcmp: \"%s\" appears later in dictionary than \"%s\"\n\n", a,b);
      else printf("\"%s\" and \"%s\" are same\n\n", a,b);

      scanf("%s", a);
      scanf("%s",b);
   }
}

/*
int my_strcmp(char a[], char b[]){
      int result;
      int i = 0;
      int j = 0;
      int min;

      if (strlen(a) < strlen(b)) {
        min = strlen(a);
      }
      else {
        min = strlen(b);
      }

      while (i <= min) {
        if (a[j] < b[i]) {
          result = -1;
          break;
        }
        else if (a[j] > b[i]) {
          result = 1;
          break;
        }
        else {
          result = 0;
          i++;
          j++;
        }
      }

  return result;
}
*/

int my_strcmp(char a[], char b[]) {
  if (strlen(a) < strlen(b)) {
    int i = 0;
    while (i < strlen(a)) {
      if (a[i] != b[j])
        return 1;
      i++;
    }
    return 0;
  }

  else {
    int j = 0;
    while (j < strlen(b)) {
      if (a[j] != b[j])
        return 1;
      j++;
    }
    return 0;
  }
}
