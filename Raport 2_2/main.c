#include <stdio.h>
#include <stdlib.h>

void insertionSort(int tab[]){
int temp;
int j; // zmienna pomocnicza
for (int i=0; i<15; i++){ // tworz� p�tl� kt�ra przechodzi przez ka�dy element tablicy
    temp=tab[i];
    j=i-1;
    while(j>=0 && tab[j]>temp){
        tab[j+1]=tab[j];
        j--;
    }
    tab[j+1]=temp;
    // zaczyna od drugiego elementu w tablicy i por�wnuje go z 1wszym
    // je�li pierwszy jest wi�kszy, jest przesuwany w prawo itd
}
}
int main() {
int tab[] = {13, 12, 14, 8, 9, 10, 11, 4, 7, 6, 5, 3, 2, 1, 0};
// wprowadzenie element�w
insertionSort(tab); // wywo�anie metody
for (int i=0; i<15; i++){ // wypisanie wszystkich element�w
    printf("%d \n", tab[i]);
}
}
