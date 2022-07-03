#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*
Zadanie: wsakzniki do funkcji
*/

int max(int a, int b);
int min(int a, int b);
int sum(int a, int b);
int wyborFunkcji();
int forAll(int tablica[], int elementCount, int f(int, int));
int (*f[3])(int, int) = {max, min, sum};

int main (int argc, const char * argtablica[]){

    int elementCount;
    int * tablica;
    int functionId;

    functionId = wyborFunkcji();
    printf("Podaj liczbe elementow na ktorych wykonasz dzialania: \n");
    scanf("%d", &elementCount);
    tablica = (int*)calloc(elementCount, sizeof(int));
    for(int i = 0; i < elementCount; i++){
        printf("Podaj element nr %d: ", i+1);
        scanf("\n%d", &tablica[i]);
    }
    int v;

    for(int i = 0; i < elementCount; i++)
        printf("%d  ", tablica[i]);

    v = forAll(tablica, elementCount, *f[functionId]);

    printf("\nWynik: %d: ", v);

    free(tablica);
	return 0;
}
int forAll(int tablica[], int elementCount, int f(int, int)){
    int v = tablica[0];
    for(int i = 0; i < elementCount; i++){
            v = f(v, tablica[i]);
    }
    return v;
}

int wyborFunkcji(){
    int functionId;
    printf("Jakie dzialanie chcialbys wykonac?\n");
    printf("[0] - obliczenie maksimum\n");
    printf("[1] - obliczenie minimum\n");
    printf("[2] - obliczenie sumy\n");
    scanf("%d", &functionId);
    if(functionId < 0 || functionId > 2){
        printf("Niewlasciwy wybor, sprobuj jeszcze raz.\n\n");
        functionId = wyborFunkcji();
    }
    return functionId;
}

int max(int a, int b){
    if(a >= b)
        return a;
    else
        return b;
}

int min(int a, int b){
    if(a <= b)
        return a;
    else
        return b;
}

int sum(int a, int b){
    return a+b;
}


