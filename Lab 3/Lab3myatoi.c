/***************************************
* EECS2031M - Lab3
* Author: Hussain, Sayeda
* Email: sayedah@my.yorku.ca
* eecs_username: sayedah
* York Student #: 215427214
****************************************/
#include <stdio.h>
#include <string.h>

#define SIZE 10

int main(){
  int a,b;
  char arr [SIZE];

	int power(int, int);
	int my_atoi(char[]);

  printf("Enter a postive number or 'quit': " );
  scanf("%s", arr);

  while(strcmp("quit", arr) != 0)
  {
    printf("%s", arr);

    a = atoi(arr);
    printf("atoi:    %d (%#o, %#X)\t\t%d\t\t%d\n", a,a,a, a*2, a*a);

    b = my_atoi(arr);
    printf("my_atoi:   %d (%#o, %#X)\t\t%d\t\t%d\n\n", b,b,b, b*2, b*b);

    printf("Enter a postive number or 'quit': " );
    scanf("%s", arr);
  }

  return 0;
}

/* convert an array of digit characters into a decimal int */

int my_atoi (char c[])
{
	int j = 0;
	int total = 0;
	int i;
	for (i = strlen(c) - 1; i >= 0; i--) {
		total += (c[i] - '0') * power(10, j);
		j++;
	}
	return total;

}

int power(int base, int n) {
	if (n == 0)
		return 1;

	else {
		int power = 1;
		int k;
		for (k = 1; k <= n; k++)
			power *= base;

		return power;
	}

}
