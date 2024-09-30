#include <stdio.h>

int main() {
    
   float n;
   printf("entre un nomber : ");
   scanf("%f",&n);
   if (n>0){
       printf ("le nombre donné est positif ");
   }
   else if (n<0){
       printf("le nombre donné est nigatife");
   }
   else printf ("le nombre donné est nul");

    return 0;
}