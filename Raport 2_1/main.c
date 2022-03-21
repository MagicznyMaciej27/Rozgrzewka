#include <stdio.h>
#include <stdlib.h>
void bubbleSort(int tab[]){
int temp; // zainicjowanie tempa
for (int i=0; i<15-1; i++){ // inicjujemy i, które przechodzi przez wszystkie wartoœci
    for (int j=0; j<15-i-1; j++){ // inicjujemy zmienn¹ pomocnicz¹
        if(tab[j] > tab[j+1]) {
            temp=tab[j];
            tab[j]=tab[j+1];
            tab[j+1]=temp;
        // pierwszy element porównywany jest z drugim, jeœli drugi jest wiêkszy,
        // zmieniaj¹ siê miejscami; nastêpnie to samo dzieje siê z 2gim i 3cim itd
        }
    }
}
}
int main() {
int tab[] = {13, 12, 14, 8, 9, 10, 11, 4, 7, 6, 5, 3, 2, 1, 0};
// wywo³ujemy wartoœci w tablicy
bubbleSort(tab); // wywo³anie metody
for (int i=0; i<15; i++) { // wypisujemy posortowane wartoœci
    printf("%d \n", tab[i]);
}
}
