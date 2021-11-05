/***************************************
* EECS2031M - Lab3
* Author: Hussain, Sayeda
* Email: sayedah@my.yorku.ca
* eecs_username: sayedah
* York Student #: 215427214
****************************************/
#include <stdio.h>

int main() {
	int yr;
	int isLeap(int);

	printf("Enter a year: ");
	scanf("%d", &yr);
	while (yr >= 0) {
		if (isLeap(yr) == 1)
			printf("Year %d is a leap year\n\n", yr);
		else if (isLeap(yr) == 0)
			printf("Year %d is not a leap year\n\n", yr);

		printf("Enter a year: ");
		scanf("%d", &yr);
	}

	return 0;
}

int isLeap(int year) {
	if ((year % 4 == 0) && (year % 100 != 0))
		return 1;
	else if (year % 400 == 0)
		return 1;
	else
		return 0;
}
