#include<stdio.h>

void main()
{
  int a,n,factorial;

  printf("enter any value:");
  scanf("%d",&n);
  factorial=1;
  for(a=1;a<=n;)
  {
    factorial=a*factorial;
    a++;
  }
    printf("%d",factorial);


}
