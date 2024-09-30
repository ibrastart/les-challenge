#include <stdio.h>

int main() {
  int n,i;
  printf ("entre le le nomber : ");
  scanf ("%d",&n);
 int t=1;
  for(i=1;i<=n;i++){
      t+=2;
      printf("%d\n",t);

  }
    return 0;
}