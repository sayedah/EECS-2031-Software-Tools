/***************************************
* EECS2031M Lab 6
* Author: Hussain, Sayeda
* Email: sayedah@my.yorku.ca
* eecs_username: sayedah
* York Student #: 215427214
****************************************/

#include <stdio.h>
#include <stdlib.h>

struct ints
{
   int data1;
   int data2;
};


// functions taking struct as argument
int getSum(struct ints);
void processStruc (struct ints *);

// function return a structure
struct ints getSumDiff(int, int);

main()
{

  struct ints a = {100,4};
  printf("-------- struct and function -----------------\n");
  // function that take structures as arguments
  printf("elements sum of a: %d\n\n", getSum(a));

  // print a's members
  printf("struct a before process: %d %d\n", a.data1, a.data2);

  processStruc(&a);
  // ptint a's members again
  printf("struct a after  process: %d %d\n\n", a.data1, a.data2);

  // functions that return a struct, encapsulating values
  /**********************************  */
  int num1, num2;
  printf("Enter two integers: ");
  scanf("%d %d", &num1, &num2);
  struct ints s =  getSumDiff(num1, num2);
  int sum =  s.data1;     //  get sum via s
  int diff = s.data2;    //  get diff via s
  printf("sum is: %d, diff is %d\n\n", sum, diff);

 /********************************** */
  printf("--------- array of structs ----------------\n");
  struct ints structArr[3] = {{1,2}, {3,4}};
  // set the 3rd element structures's int1 and int2 to be 5 and 6
  structArr[2].data1 = 5; structArr[2].data2 = 6;
  int i;
  for (i=0; i<3 ;i++ )
  {
    printf("arr[%d]: %d %d\n", i, structArr[i].data1, structArr[i].data2);
  }
  printf("\n");
  /***********malloc/calloc for structure*********************** */
  struct ints *p = malloc(sizeof(struct ints));
  p -> data1 = 777;    // via p, store data1 with value 777
  p -> data2 = 888;    // via p, store data2 with value 888
  printf("Two member values: %d %d\n", (*p).data1, p->data2 );

}

/* call by value  */
int getSum(struct ints  s){

  return s.data1 + s.data2;

}

/* call by value  */
void processStruc(struct ints * x){

  x -> data1 ++;
  x -> data2 +=100;
}


struct ints getSumDiff(int a, int b){
  struct ints result;
  result.data1 = a+b;
  result.data2 = a-b;
  return result;
}
