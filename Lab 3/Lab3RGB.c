/***************************************
* EECS2031M - Lab3
* Author: Hussain, Sayeda
* Email: sayedah@my.yorku.ca
* eecs_username: sayedah
* York Student #: 215427214
****************************************/
#include <stdio.h>

#define AlphaValue 100
#define R 16
#define G 8
#define A 24

int main() {

  int r, g,b;
  unsigned int rgb_pack;
  int r_unpack, g_unpack,b_unpack;
  int alpha = AlphaValue;

  printf("enter R value (0~255): ");
  scanf("%d",&r);
  printf("enter G value (0~255): ");
  scanf("%d",&g);
  printf("enter B value (0~255): ");
  scanf("%d",&b);

  while(! (r<0 || g<0 || b <0) )
  {
     printf("A: %d\t", alpha);  printBinary(alpha); printf("\n");
     printf("R: %d\t", r);  printBinary(r); printf("\n");
     printf("G: %d\t", g);  printBinary(g); printf("\n");
     printf("B: %d\t", b);  printBinary(b); printf("\n");

    rgb_pack = AlphaValue << A | r << R | g << G | b << 0;

  // printf("\nPacked: value %d\t", rgb_pack); printBinary(rgb_pack);printf("\n");
     printf("\nPacked:\t"); printBinary(rgb_pack);printf(" (%d)\n", rgb_pack);
     printf("\nUnpacking  ......\n");
     r=g=b=-1;

    r_unpack = (rgb_pack >> R) & 255;
    g_unpack = (rgb_pack >> G) & 255;
    b_unpack = rgb_pack & 255;


     printf("R: "); printBinary(r_unpack); printf(" (%d, %#o, %#X)\n", r_unpack, r_unpack, r_unpack);
     printf("G: "); printBinary(g_unpack); printf(" (%d, %#o, %#X)\n", g_unpack, g_unpack, g_unpack);
     printf("B: "); printBinary(b_unpack); printf(" (%d, %#o, %#X)\n", b_unpack, b_unpack, b_unpack);
     printf("------------------------------------\n");

     /* read again */
     printf("\nenter R value (0~255): ");
     scanf("%d",&r);
     printf("enter G value (0~255): ");
     scanf("%d",&g);
     printf("enter B value (0-255): ");
     scanf("%d",&b);

  }

}
