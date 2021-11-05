/***************************************
* EECS2031M Lab 6
* Author: Hussain, Sayeda
* Email: sayedah@my.yorku.ca
* eecs_username: sayedah
* York Student #: 215427214
****************************************/

#include <stdio.h>
#include <stdlib.h>


void insertBegining(int);

struct node {
   int data;
   struct node * next;
};

struct node * head;

main()
{
   head = NULL;

   insertBegining(100);
   insertBegining(200);
   insertBegining(300);
   insertBegining(400);
   insertBegining(500);

   int i;
   struct node * cur;
   for(cur= head; cur != NULL; cur= cur->next)
     printf("%d ", cur->data);
   printf("\n");
}

void insertBegining(int dat){
   struct node *newNode = malloc(sizeof(struct node));
   newNode -> data = dat;
   newNode -> next = head;
   head = newNode;

}

/*the previous version was wrong because when they assigned head to equal newNode, it was assigning a local variable
(new node) to a global pointer variable (head) type, which was not possible as newNode would've been lost as soon as
the function ended due to its lifetime being temporary as a local variable. To fix this we need to instead allocate
memory in the heap to store the newNode in so it can accessed throughout the whole program
*/
