#include<stdio.h>

void initialize(int *a,int *b,char *c)
{

     *a =2;
     *b =3;
     *c ='A';
}
int main()
{

  int a,b;
  char c;
  
  initialize(&a ,&b, &c);
  printf("a=%d,b=%d,c=%d",a,b,c);
}
