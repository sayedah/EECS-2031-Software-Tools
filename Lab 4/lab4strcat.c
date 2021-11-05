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
void my_strcat(char[], char[]);

int main(){
   char a[SIZE];
   char b[SIZE];
   char c[SIZE];
   char d[SIZE];

   scanf("%s",a);
   scanf("%s",b);
   while (strcmp(a, "xxx") != 0 || strcmp(b, "xxx") != 0){
      strcpy(c,a); strcpy(d,b);
      strcat(a,b);
      my_strcat(c,d);

      printf("strcat:   %s\n", a);
      printf("mystrcat: %s\n\n", c);

      scanf("%s",a);
      scanf("%s",b);

   }
}

void my_strcat(char a[], char b[]){
      int i = 0;
      int j = strlen(a);
      while (i <= strlen(b)) {
        a[j] = b[i];
        i++;
        j++;
      }
}
