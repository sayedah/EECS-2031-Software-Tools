/***************************************
* EECS2031M Lab 5
* Author: Hussain, Sayeda
* Email: sayedah@my.yorku.ca
* eecs_username: sayedah
* York Student #: 215427214
****************************************/
#include <stdio.h>

void swapIncre(int *, int *, int *);

int main( ) {
  int a, b,c;

  /* Input three integers*/
  scanf("%d %d %d", &a, &b,&c);
  while(a != -1) {
     printf("Original inputs:   a:%-4d  b:%-4d  c:%-4d\n", a, b,c);
     swapIncre(&a,&b,&c);
     printf("Rearranged inputs: a:%-4d  b:%-4d  c:%-4d\n\n", a, b,c);

     /* read again */
     scanf("%d %d %d", &a, &b,&c);
   }

}

void swapIncre(int *pa, int *pb, int *pc){
   int temp = *pa;
   *pa = *pc;
   *pc = temp;

   *pa += 100;
   *pb *= 2;
}
