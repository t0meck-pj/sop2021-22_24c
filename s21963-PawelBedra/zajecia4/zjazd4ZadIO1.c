#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*
Zadanie z IO 1
*/

int main (int argc, const char * argv[]){

    FILE *fp;
    int temp;
    int * liczby;
    int rozmiar;
    int i = 0;
    const char * fileName;

    if(argv[1] != NULL){
        fileName = argv[1];
    } else {
        printf("Podaj nazwe pliku: ");
        scanf("\n%s", fileName);
    }

//Otwarcie pliku
    fp = fopen(fileName, "r");
     if(fp == NULL){
        printf("Error in opening file");
        return -1;
     }
//Wczytanie jaka ilosc liczba ma zostac wypisana z pliku
     fscanf(fp, "%d", &rozmiar);
     printf("Ilość liczb do wypisania z pliku: %d\n", rozmiar);

//Pobranie odpowiedniej ilosci liczb do dynamicznej tablicy i wypisanie jej elementow
     printf("------------------------liczby z pliku---------------------\n");
     liczby = (int*)calloc(rozmiar, sizeof(int));
     while(i != rozmiar && fscanf(fp, "%d", &temp) != EOF){
        liczby[i] = temp;
        printf("%d\n", liczby[i]);
        i++;
     }

//Wypisanie liczba w odwroconej kolejnosci
     printf("---------------------liczby w odwroconej kolejnosci---------\n");
     for(int j = rozmiar - 1; j >= 0; j-- )
        printf("%d\n", liczby[j]);

//Zwolnienie pamieci oraz wyzerowanie wskaznikow
     free(liczby);
     fclose(fp);
     fp = NULL;
     fileName = NULL;

	return 0;

	}

