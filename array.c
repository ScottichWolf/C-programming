#include<stdio.h>
#include<conio.h>

//Sarvesh edited this file.//

int main()
{
  int i,z[5];
  for(i=0;i<5;i++)
  {
  printf("Enter the value of elements %d =",i);
  scanf("%d",&z[i]);
  }
  printf("\n");
  for(i=0;i<5;i++)
  {
    printf("%d\n",z[i]);
  }
  return 0;
}
