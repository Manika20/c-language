#include<stdio.h>
int main()
{
  int a,n,i,f=0;
  printf("enter the positive integer");
  scanf("%d",&n);
  for(i=2;i<n;i++) 
  {
      if(n%i==0)
      {
          f=f+1;
      }
  } 
  if(f==0)
  {
      printf("prime number");
  }
  else{
      printf("not a prime number n has %d factors without 1 and itself ",f);
  }
  return 0;
}