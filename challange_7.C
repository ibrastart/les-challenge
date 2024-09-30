#include <stdio.h>

int main() {
char a ;
printf("donné est un alphabetr:");
scanf("%c",&a);
if (65<=a&&a<=90){
    printf("la alphabetr donee est majescul");
}
else {
    printf("la alphabetr donee est menuscul");
}
    return 0;
}