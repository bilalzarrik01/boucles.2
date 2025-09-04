#include <stdio.h>
int main(){

int n , a , j;
printf("enter number :");
scanf("%d" , &n);
for(a = 2 ; a <=n; a++){

 for(j = 2 ; j < a ; j++ )
       if(a % j == 0)
        break;


       if(a==j)
        printf("%d ",a);


  }
return 0 ;
}



