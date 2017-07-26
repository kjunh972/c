#include <stdio.h>
void main()
{

  int a,i,j;
  a = 1;

  for (i=0; i<3; i++)
  {
    for(j=0; j<3; j++)
    {
      printf("%d  ",a);
      a++;
    }
    printf("\n");
  }
}
