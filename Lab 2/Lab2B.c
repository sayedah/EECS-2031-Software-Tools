/***************************************
* EECS2031M – Lab2 
* Author: Hussain, Sayeda 
* Email: sayedah@my.yorku.ca 
* eecs_username: sayedah 
* York Student #: 215427214
****************************************/
#include <stdio.h>

int main() { 
	int c;
	while ((c = getchar()) != EOF) {
		if ((c >= 'a') && (c <= 'z')) 
			c -= ' ';
		putchar(c);

	}

	return 0; 
 }

