#include<stdio.h>
void main()
{
  int i,j;

  for(i=1;i<6;i++)
  {
    for(j=1;j<=5-i;j++)
    {
      printf(" ");
    }
    for(j=1;j<=i;j++)
    printf("%d ",j);

    printf("\n");
  }
    for(i=1;i<5;i++)
    {
      for(j=1;j<=i;j++)
      {
        printf(" ");
      }
      for(j=1;j<=5-i;j++)
      printf("%d ",j);

      printf("\n");
    }



}
