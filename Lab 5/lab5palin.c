/***************************************
* EECS2031M Lab 5
* Author: Hussain, Sayeda
* Email: sayedah@my.yorku.ca
* eecs_username: sayedah
* York Student #: 215427214
****************************************/
#include <stdio.h>
#include <string.h>

#define SIZE 40

void printReverse (char *);
int isPalindrome (char *);

int main ()
{
   int result;  char c; int i;  int count=0;
   char arr[SIZE];

   fgets(arr,SIZE,stdin);
   while (strcmp(arr, "quit\n") !=0)
   {
      arr[strlen(arr)-1] = '\0'; // remove the trailing \n
      // print backward
      printReverse(arr);

     if (isPalindrome (arr))
         printf ("\nIs a palindrome.\n\n");
      else
         printf ("\nNot a palindrome.\n\n");

   fgets(arr,SIZE,stdin);

    }
    return 0;
}


int isPalindrome (char * str)
{
  int half = strlen(str)/2;
  int i; int s = 0;
  for (i = strlen(str)-1; i >= half; i--) {
    if (*(str+i) != *(str+s))
      return 0;
    s++;
  }
  return 1;
}

// assume the \n was already removed manually
void printReverse(char * str)
{
  int i;
  for (i = strlen(str)-1; i >= 0; i--) {
      printf("%c", *(str+i));
  }
  printf("\n");
}
