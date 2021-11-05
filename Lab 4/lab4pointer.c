/***************************************
* EECS2031M � Lab 4
* Author: Hussain, Sayeda
* Email: sayedah@my.yorku.ca
* eecs_username: sayedah
* York Student #: 215427214
****************************************/
#include <stdio.h>

int main() {
  int age = 10;
  int age2 = 100;
  int *ptr;
  int *ptr2;

  ptr = &age;
  printf("age: %d  %d\n", age, *ptr);

  *ptr = 14;
  printf("age: %d  %d\n", age, *ptr);

  ptr2 = &age2;

  *ptr2 = *ptr;
  printf("age2: %d  %d\n", age2, *ptr2);

  ptr2 = ptr;
  printf("ptr2's pointee: %d\n", *ptr2);
  printf("age: %d  %d  %d\n", age, *ptr, *ptr2);

  (*ptr2)--;
  printf("age: %d  %d  %d\n", age, *ptr, *ptr2);

  printf("%p  %p  %p", &age, ptr, ptr2);

  return 0;
}
