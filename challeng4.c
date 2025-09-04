#include<stdio.h>


int main() {

int  a , b , i;

printf("entrer le nombre : ");
scanf("%d" , &a);
while (a != 0)
 {
   b = a % 10 ;
   i = i * 10 + b ;
   a = a / 10 ;
 }
   printf("%d" , i);


return 0 ;
}