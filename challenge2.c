#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int j;
    int y = 0;
    int etoile = 0;

    printf("veuillez entrer un nombre :  :");
    scanf("%d", &j);

    for(int i = 1; ; i++) {
    if(i % 2 == 0){
    continue;
    } else {
     
     int space = 0;
    while(space < (j - y - 1)) {
     printf(" ");
     space++;
    }

    
    while(etoile < i){
    printf("*");
    etoile++;
    }

    etoile = 0;
    printf("\n");
    y += 1;

    if(y == j)
    break;
    }
    }

    return 0;
}