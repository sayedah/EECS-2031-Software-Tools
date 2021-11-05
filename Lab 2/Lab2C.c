/***************************************
* EECS2031M – Lab2 
* Author: Hussain, Sayeda 
* Email: sayedah@my.yorku.ca 
* eecs_username: sayedah 
* York Student #: 215427214
****************************************/
#include <stdio.h>
#include<string.h>

#define SIZE 10

int main () {

	int j; 
 	int k[SIZE] = {0};
 	int i=0;
 	for (i=0; i< SIZE; i++)  
   		printf("k[%d]: %d\n", i, k[i]);


  	char msg[]="Hello world";
  	printf("\nmsg: %s\n", msg);
  	printf("memory size of msg: %d (bytes)\n", sizeof(msg));
  	printf("strlen of msg: %d\n", strlen(msg));

	for (j = 0; j < sizeof(msg); j++) 
		printf("msg[%d]: %d \t %c\n", j, msg[j], msg[j]);
	
	
 

  	char msg2[2*SIZE] = "Hello world";
  	printf("\nmsg2: %s\n", msg2); 
  	printf("memory size of msg2: %d (bytes)\n", sizeof(msg2));
  	printf("strlen of msg2 : %d\n", strlen(msg2));

	for (j = 0; j < sizeof(msg2); j++) 
		printf("msg2[%d]: %d \t %c\n", j, msg2[j], msg2[j]);
	
	

  	char msg3[2*SIZE];
  	printf("\nEnter a string: ");
  	scanf("%s",msg3);
  	printf("msg3: %s\n",msg3);
  	printf("memory size of msg3: %d (bytes)\n", sizeof(msg3));
  	printf("strlen of msg3: %d\n", strlen(msg3));

	for (j = 0; j < sizeof(msg3); j++) 
		printf("msg3[%d]: %d \t %c\n", j, msg3[j], msg3[j]);
	

 	 return 0;
}
