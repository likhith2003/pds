#include <stdio.h>
// The code is written for "Abhirup Gupta" (7 & 5 characters)

int main()
{
  char *x = "Abhirup", *y = "Gupta";
  int i;

  printf("\n35 bytes starting from x[0]:\n");
  for (i = 0; i < 35; i++)
    printf("x[%c%c%d]: %p --> %c = %d\n",
           (i > 99) ? '\0' : '0', (i > 9) ? '\0' : '0', i, &x[i], (x[i] == '\n' || x[i] == '\0') ? '#' : x[i], x[i]);

  printf("\n35 bytes starting from y[0]:\n");
  for (i = 0; i < 35; i++)
    printf("y[%c%c%d]: %p --> %c = %d\n",
           (i > 99) ? '\0' : '0', (i > 9) ? '\0' : '0', i, &y[i], (y[i] == '\n' || y[i] == '\0') ? '#' : y[i], y[i]);

  x = y;

  printf("\nAfter x is modified to y:\n");

  printf("\n140 bytes starting from x[0]:\n");
  for (i = 0; i < 140; i++)
    printf("x[%c%c%d]: %p --> %c = %d\n",
           (i > 99) ? '\0' : '0', (i > 9) ? '\0' : '0', i, &x[i], (x[i] == '\n' || x[i] == '\0') ? '#' : x[i], x[i]);

  return 1;
}
