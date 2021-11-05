/***************************************
* EECS2031M Lab 6
* Author: Hussain, Sayeda
* Email: sayedah@my.yorku.ca
* eecs_username: sayedah
* York Student #: 215427214
****************************************/
#include <stdio.h>
#include <string.h>

void exchange2D(char[][50], int, int);
void sort2D(char[][50], int);
void print2D(char[][50], int);

main() {
  char inputs[30][50];
  int current_row = 0;
  int i, j, k;
  char temp[50];

  //read input
  printf("Enter String: ");
  fgets(inputs[current_row], 50, stdin);
  //start loop
  while (strcmp(inputs[current_row], "xxx\n") != 0) {
    inputs[current_row][strlen(inputs[current_row])-1] = '\0';  //get rid of trailing '\n'
    current_row++;
    //read again
    printf("Enter String: ");
    fgets(inputs[current_row], 50, stdin);
  }
  printf("\n");
  //finished reading

  //print out the input
  print2D(inputs, current_row);


  //swap row 0 and row 1
  strcpy(temp, inputs[0]);
  strcpy(inputs[0], inputs[1]);
  strcpy(inputs[1], temp);

  //call on exchange2D function on rows 3 and 4
  exchange2D(inputs, 3, 4);

  //print swapped array
  printf("== after swapping ==\n");
  print2D(inputs, current_row);

  //call on sort2D function
  sort2D(inputs, current_row);

  //print sorted array
  printf("== after sorting ==\n");
  print2D(inputs, current_row);

}

//swaps row 3 and row 4
void exchange2D(char arr[][50], int i, int j) {
  char temp[50];
  strcpy(temp, arr[i-1]);
  strcpy(arr[i-1], arr[j-1]);
  strcpy(arr[j-1], temp);
}

//sorts array in lexographical order
void sort2D(char arr[][50], int n) {
  int i, j, smallest;
  char temp[50];
  for (i = 0; i <= n-2; i++) {
    smallest = i;
    for (j = i; j <= n-1; j++) {
      if (strcmp(arr[j], arr[smallest]) < 0)
        smallest = j;
    }
    strcpy(temp, arr[i]);
    strcpy(arr[i], arr[smallest]);
    strcpy(arr[smallest], temp);
  }
}

//prints out array in desired format
void print2D(char arr[][50], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("[%d]: %s\n", i, arr[i]);
  }
  printf("\n");
}
