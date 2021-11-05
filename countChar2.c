/***************************************
* EECS2031M – Lab1 
* Author: Hussain, Sayeda 
* Email: sayedah@my.yorku.ca 
* eecs_username: sayedah 
* York Student #: 215427214
****************************************/
#include <stdio.h> // define EOF

main(){
  int c;
  int count = 0;
  int acount = 0;

  c = getchar(); /*read first char*/
  while(c != EOF) /* no end of file*/
  {
    count++; //include spaces and '\n'
    if (c == 'a') {
      acount++;
    }
    c = getchar(); /* read next */
  }
  printf("# of chars: %d\n",count);
  printf("# of char 'a': %d\n", acount); 

}
