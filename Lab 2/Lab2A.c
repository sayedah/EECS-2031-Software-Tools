/***************************************
* EECS2031M – Lab2 
* Author: Hussain, Sayeda 
* Email: sayedah@my.yorku.ca 
* eecs_username: sayedah 
* York Student #: 215427214
****************************************/
#include<stdio.h>

int main() {
	int num;
	char c;
    	int digit; 
    	int isDigit(char);	//function declaration 

     	printf("Enter an integer and a char separated by blank (-10000 to exit): ");
       	scanf("%d %c", &num, &c);

    	while(num != -10000) {
		if (isDigit(c) == 1) 
			printf("Character '%c' represents a digit. Sum of %d and %c is %d \n", c, num, c, (c - '0') + num); 
	
		else if (isDigit(c) == 0) 
			printf("Character '%c' does not represent a digit \n", c); 
	
		printf("\n"); 
    		printf("Enter an integer and a char separated by blank (-10000 to exit): ");
       		scanf("%d %c", &num, &c);
     	}

     	return 0;
}

int isDigit(char i) {
	if ((i >= '0') && (i <= '9')) 
		return 1; 
     
     	else 
		return 0;
     
}
