/***************************************
* EECS2031M - Lab3
* Author: Hussain, Sayeda
* Email: sayedah@my.yorku.ca
* eecs_username: sayedah
* York Student #: 215427214
****************************************/
#include <stdio.h>

int main() {

 int op1; float op2;  char operator;

 float calIntFloat(int, char, float);
 float calIntInt(int, char, int);
 float calFloatFloat(float, char, float);

 // conversion in arithemetic
 printf("3.0*9/2/4=%f  9/2*3.0/4=%f  9*3/2*3.0/4=%f\n", 3.0*9/2/4, 9/2*3.0/4, 9/2*3.0/4);

 // conversion in assignment
 float f2  = 3.96;
 float f3 = 3.03;
 int i = f2; int j = f3;
 printf("i: %d  j: %d\n\n", i, j);

//////////////////////////////////////////////////////////////////////////////////////
 printf("Enter operand_1 operator operand_2 separated by blanks -> ");
 scanf("%d %c %f", &op1, &operator, &op2);

 while (op1 != -1 && op2 != -1) {
 	printf("Your input '%d %c %f' results in: \n", op1, operator, op2);
 	printf("%f (fun_IF)\n", calIntFloat(op1, operator, op2));
 	printf("%f (fun_II)\n", calIntInt(op1, operator, op2));
 	printf("%f (fun_FF)\n\n", calFloatFloat(op1, operator, op2));


 	printf("Enter operand_1 operator operand_2 separated by blanks -> ");
 	scanf("%d %c %f", &op1, &operator, &op2);
 }
 
 return 0;
}

float calIntFloat(int op1, char operator, float op2)
{
   float result;
   result = (operator == '+') ? (op1 + op2) : ((operator == '-') ? (op1 - op2) : ((operator == '*') ? (op1 * op2) : (op1 / op2)));
   return result;
}

float calIntInt(int op1, char operator, int op2)
{
   int result;
   result = (operator == '+') ? (op1 + op2) : ((operator == '-') ? (op1 - op2) : ((operator == '*') ? (op1 * op2) : (op1 / op2)));
   return result;
}

float calFloatFloat(float op1, char operator, float op2)
{
   float result;
   result = (operator == '+') ? (op1 + op2) : ((operator == '-') ? (op1 - op2) : ((operator == '*') ? (op1 * op2) : (op1 / op2)));
   return result;
}

/*
Explanation:
The reason funIF and funFF are different from funII is because funII performs the
arithmetic with integers from the beginning, so precision is less than the other two.
funIF and funFF are the same even though funIF passes through an int because the int
in funIF is implicitly converted to the type of higher precision before performing
arithmetic, so it ends up as a float.
*/
