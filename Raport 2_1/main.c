#include <stdio.h>
#include <stdlib.h>
void bubbleSort(int tab[]){
int temp; // zainicjowanie tempa
for (int i=0; i<15-1; i++){ // inicjujemy i, kt�re przechodzi przez wszystkie warto�ci
    for (int j=0; j<15-i-1; j++){ // inicjujemy zmienn� pomocnicz�
        if(tab[j] > tab[j+1]) {
            temp=tab[j];
            tab[j]=tab[j+1];
            tab[j+1]=temp;
        // pierwszy element por�wnywany jest z drugim, je�li drugi jest wi�kszy,
        // zmieniaj� si� miejscami; nast�pnie to samo dzieje si� z 2gim i 3cim itd
        }
    }
}
}
int main() {
int tab[] = {13, 12, 14, 8, 9, 10, 11, 4, 7, 6, 5, 3, 2, 1, 0};
// wywo�ujemy warto�ci w tablicy
bubbleSort(tab); // wywo�anie metody
for (int i=0; i<15; i++) { // wypisujemy posortowane warto�ci
    printf("%d \n", tab[i]);
}
}
