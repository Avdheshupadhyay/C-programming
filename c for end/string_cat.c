#include <stdio.h>
#include<string.h>
void main()
{
  char a[22] = {"jai mahakal"};
  char b[23] = {"jai shiv shambhu"};

  strcat(a, b);
  printf("%s\n", a);
}