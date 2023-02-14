#include<stdio.h>

int n = 23;
double x = 23467;
char c1 = 'a';
int
main ()
{
  int m = 6;
  short s = -1;
  long L = 4678;
  float y = 2.35;

  printf ("Code of main:%u\n", &main);
  printf ("Variable n, add:%u, memory size:%d\n", &n, sizeof (n));
  printf ("Variable n, add:%u, memory size:%lf\n", &n, sizeof (x));
  printf ("Variable n, add:%u, memory size:%c\n", &n, sizeof (c1));
  printf ("Variable n, add:%u, memory size:%d\n", &n, sizeof (m));
  printf ("Variable n, add:%u, memory size:%d\n", &n, sizeof (s));
  printf ("Variable n, add:%u, memory size:%d\n", &n, sizeof (L));
  printf ("Variable n, add:%u, memory size:%f\n", &n, sizeof (y));
  return 0;
}

