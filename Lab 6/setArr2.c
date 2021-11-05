/***************************************
* EECS2031M Lab 6
* Author: Hussain, Sayeda
* Email: sayedah@my.yorku.ca
* eecs_username: sayedah
* York Student #: 215427214
****************************************/

#include <stdio.h>

void setArr (int, int);

int * arr[10]; // array of 10 int pointers

int main(int argc, char *argv[])
{
     int i;

     setArr(0, -10);
     setArr(1, 100);
     setArr(2, 200);
     setArr(3, 300);
     setArr(4, 400);


     for(i=0; i<5;i++)
        printf("arr[%d] -*-> %d %d\n", i, *arr[i], **(arr+i) );   /* should be -10,100, 200,300,400 */
     return 0;
}

/* set arr[index], which is a pointer, to point to an integer of value v */
void setArr (int index, int v){
     int i = v;
     arr[index] = &i;
}

/*
This program compiled successfully and ran, however it only showed 400 400 in arr[0] and -2 for the rest/
This was obviously not what we wanted. The reason for this is because we're setting a local variable i
to hold the desired value. This variable i only exists in a stack, and is deallocated once the function
setArr is finished running. The program is attempting to set the pointer arr[index] to the address of a
local variable. So when the program runs, it will show values but they will be garbage values, as the
main() has no idea what the memory address of i was.
To fix this, allocate memory in the heap instead. 
*/
