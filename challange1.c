#include <stdio.h>

int main() {
  int n;
  printf ("entre le nomber : ");
  scanf ("%d",&n);
  int c = 1;
  while (c <=10){
      int p=(n*c);
  printf("%d*%d=%d\n",n,c,p);
  c=c+1;
  }
  
  
  

    return 0;
}