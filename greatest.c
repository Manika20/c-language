#include<stdio.h>
int main()
{
  int a,b,c,d,f,h;
  printf("enter a,b,c,d");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if(a>b)
  {
    f=a;
  }else{
    f=b;
  }if(f>c){
    h=f;
  }else{
    h=c;
  }if(h>d)
  {
    printf("%d",h);

  }else{
    printf("%d",d);
  }
  return 0;
}