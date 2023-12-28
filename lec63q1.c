#include<stdio.h>

 void main()
{
  int a,n,sum;

  printf("enter any value:");
  scanf("%d",&n);
  sum=0;
  for(a=1;a<=n;)
  {
    sum=a+sum;
    a++;
  }
    printf("%d",sum);


}
