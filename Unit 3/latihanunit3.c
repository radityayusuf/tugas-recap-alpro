#include <stdio.h>

int main (){
    int jumlahElemen ;

    do {
        printf("Jumlah elemen array: ");
        scanf("%d", &jumlahElemen);
    } while(jumlahElemen <= 0) ;

    int arrayOfInteger[jumlahElemen];

    for (int i = 0 ; i < jumlahElemen ; i++){
        printf("value elemen : ") ;
        scanf("%d", &arrayOfInteger[i]) ;
    }

    int totalValueElement = 0 ;
    for (int j = 0 ; j < jumlahElemen ; j++){
        totalValueElement += arrayOfInteger[j];
    }

    printf("Total value element array: %d", totalValueElement);

    return 0 ;
}