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
  	int i; 
  	int count[10] = {0}; 

  	c = getchar(); 
  	while(c != EOF) {
    		if ((c >= '0') && (c <= '9')) 
    			count[c - '0']++; 
     
   		 c = getchar();
 	}

  	for (i = 0; i < 10; i++) 
		printf("%d: %d\n", i, count[i]);
  
  	return 0; 
}
