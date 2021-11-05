/***************************************
* EECS2031M Lab 6
* Author: Hussain, Sayeda
* Email: sayedah@my.yorku.ca
* eecs_username: sayedah
* York Student #: 215427214
****************************************/

#include <stdio.h>

void setArr (int, int);

int * arr[10]; // array of 10 int pointers, global variable

int main(int argc, char *argv[])
{
     int i;

     setArr(0, -10);
     setArr(1, 100);
     setArr(2, 200);
     setArr(3, 300);
     setArr(4, 400);

     for(i=0; i<5;i++)
         printf("arr[%d] -*-> %d %d\n", i, *arr[i], **(arr+i));  /* should be -10, 100, 200, 300, 400 */

     return 0;
}

/* set arr[index], which is a pointer, to point to an integer of value v */
void setArr (int index, int v){
     int i = v;
     * arr[index] = i;
}

/*When I first ran the program, it compiled successfully but when ran it didnt output anything.
The reason for this is because i is a local variable, so its lifetime only exists inside the function.
The variable i is placed in a stack, meaning it will be deallocated when the function stops running. so
when assigning the pointee of arr[index] to the value of i, the program outside of setArr will have no
idea what the function was referring to and thus cant output anything.
To fix this we allocate memory in the heap so that the value of i can exist throughout the whole program
*/
