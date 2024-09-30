// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf ("entre un nomber entre 1 est 7 : ");
    scanf ("%d",&n);
    switch (n){
        case 1 :
        printf ("lundi");
        break;
         case 2 :
        printf ("Mardi");
        break;
         case 3 :
        printf ("Mercredi");
        break;
         case 4 :
        printf ("jeudi");
        break;
         case 5 :
        printf ("vendredi");
        break;
         case 6 :
        printf ("samedi");
        break;
         case 7 :
        printf ("dimanche");
         break;
         default:
         printf("invalid nomber");
    
     }
        




    return 0;
}