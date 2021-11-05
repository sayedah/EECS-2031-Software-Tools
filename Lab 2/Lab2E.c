/***************************************
* EECS2031M – Lab2
* Author: Hussain, Sayeda
* Email: sayedah@my.yorku.ca
* eecs_username: sayedah
* York Student #: 215427214
****************************************/
#include <stdio.h>

#define MAX_SIZE 20

int main() {
   	char word[MAX_SIZE];
   	char c;
	//function declarations
	int length(char[]);
	int indexOf(char[], char);
	int occurrence(char[], char);
	int isQuit(char[]);

   	char helloArr[]  = "hello";
   	printf("\"%s\" contains %d input characters, but the size of it is %d (bytes)\n", helloArr, length(helloArr), sizeof helloArr );
   	printf("\n");

  	printf("Enter a word and a character separated by blank: ");
   	scanf("%s %c", word, &c);

   	while (isQuit(word) == 0) {
     		printf("Input word is \"%s\". Contains %d characters\n", word, length(word));
     		printf("'%c' appears %d times in the word\n", c, occurrence(word, c));
     		printf("Index of '%c' in the word is %d\n\n", c, indexOf(word, c));
     		printf("Enter a word and a character separated by blank: ");
     		scanf("%s %c", word, &c);
   	}
	
	return 0;
}


int length(char arr[])
{
	int i = 0;
	int length = 0;
  	while ((i < MAX_SIZE) && (arr[i] != '\0')) {
    		length++;
    		i++;
  	}
	return length;
}

int indexOf(char arr[], char c)
{
  	int i = 0;
  	int index = -1;
  	while(i < MAX_SIZE) {
    		if (arr[i] == c) {
      			index = i;
      			break;
    		}
    		i++;
  	}
 	return index;
}

int occurrence(char arr[], char c)
{
   	int count = 0;
   	int i;
   	for (i = 0; i < MAX_SIZE; i++) {
		if (arr[i] == c)
			count++;
   	}
   	return count;
}


int isQuit (char arr[])
{
 	if (arr[0]=='q' && arr[1]=='u' && arr[2]=='i' && arr[3]=='t')
    		return 1;
 	else
    		return 0;
}
