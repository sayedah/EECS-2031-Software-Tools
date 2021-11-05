
#include <stdio.h>
#include <string.h>

void exchange2D(char[][50]);
void sort2D(char[][50], int);
void print2D(char[][50], int);

main() {
  char inputs[30][50];
  int current_row = 0;
  int i, j, k;
  char temp[50];

  printf("Enter String: ");
  fgets(inputs[current_row], 50, stdin);
  while (strcmp(inputs[current_row], "xxx\n") != 0) {
    inputs[current_row][strlen(inputs[current_row])-1] = '\0';
    current_row++;
    printf("Enter String: ");
    fgets(inputs[current_row], 50, stdin);
  }
  printf("\n");
  //finished reading

  //print out the order the user inputted
  print2D(inputs, current_row);



  //swap row 0 and row 1
  strcpy(temp, inputs[0]);
  strcpy(inputs[0], inputs[1]);
  strcpy(inputs[1], temp);

  //call on exchange2D function
  exchange2D(inputs);

  //print swapped array
  printf("== after swapping ==\n");
  print2D(inputs, current_row);

  //call on sort2D function
  sort2D(inputs, current_row);

  //print sorted array
  printf("== after sorting ==\n");
  print2D(inputs, current_row);

}

void exchange2D(char arr[][50]) {
  char temp[50];
  strcpy(temp, arr[2]);
  strcpy(arr[2], arr[3]);
  strcpy(arr[3], temp);
}


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


void print2D(char arr[][50], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("[%d]: %s\n", i, arr[i]);
  }
  printf("\n");
}
