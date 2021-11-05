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
  int ncount = 0;

  c = getchar(); /*read first char*/
  while(c != EOF) /* no end of file*/
  {
    count++; //include spaces and '\n'
    if (c == '\n') {
      ncount++;
    }
    c = getchar(); /* read next */
  }

  printf("# of chars: %d\n", (count - ncount));
  printf("# of lines: %d\n", ncount);

}
