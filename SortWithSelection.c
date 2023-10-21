#include <stdio.h>
#include <stdlib.h>

void TriWithSelection (int tab[] ,int numberOfElements);

int main(){
    int tab[100];
    int i,j,temp,n;
    do{
        printf("\n\nEnter The size of The Table >>: ");
        scanf("%d",&n);
    }while(n < 0 || n > 100);

    printf("\n\nFill up the table to Sort it: \n");
    for(i = 0; i < n; i++){
        printf(">> ");
        scanf("%d",&tab[i]);
    }
   
    TriWithSelection(tab,n); // Tri function Call

    printf("\n\nThe Sorted Table is: \n");
    printf("\n{ ");
    for(i = 0; i < n ; i++){
       printf(" %d , ",tab[i]);
    }
    printf(" }\n\n");
    return 0;
}

void TriWithSelection (int tab[] ,int numberOfElements){
    int temp , i , j;
    for(i = 0; i < numberOfElements; i++){
        for(j = i+1 ; j < numberOfElements; j++){
            if(tab[j] < tab[i]){
                temp = tab[j];
                tab[j] = tab[i];
                tab[i] = temp;
            }
        }
       
    }
}