#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*
Zadanie z IO 2
*/

int main (int argc, const char * argv[]){

    FILE * fp = NULL;
    int c, i;
    int liczbaZnakow = 0;
    int * bufor;
    int numerWersu = 1;
    int dlugoscWersu = 16;
    int pozycja = 1;


    //Otwarcie pliku
    fp = fopen("text.txt", "r");
    if(fp == NULL){
        printf("Error in opening file");
        return -1;
     }

     fseek(fp, 0, SEEK_END);
     liczbaZnakow = ftell(fp);
     rewind(fp);
     bufor = (int*)calloc(liczbaZnakow, sizeof(char));


     printf("Prezentacja pliku w postaci liczb szestastkowych:\n");

//Petla drukujaca plik w zmienionej postaci
     while((c = fgetc(fp)) != EOF){

        bufor[i] = c;
        i++;

        if(pozycja % dlugoscWersu == 0){
            bufor[i] = '\0';

//Wypisanie liczby znakow
            printf("%.8x  ||  ", (numerWersu * dlugoscWersu));

//Wypisanie znakow w postaci hex
            for(int j = 0; j < dlugoscWersu; j++){
                if((bufor[j] == '\n') || (bufor[j] == '\t') || (bufor[j] == '\r')){
                    printf("%4x", 20);
                } else {
                    printf("%4x", bufor[j]);
                }
            }

//Wypisanie znakow w postaci oryginalnej
            printf("  ||  ");
            for(int j = 0; j < dlugoscWersu; j++){
                if((bufor[j] == '\n') || (bufor[j] == '\t') || (bufor[j] == '\r')){
                    printf("%c", 32);
                } else {
                    printf("%c", bufor[j]);
                    bufor[j] = 3;
                }
            }

            i=0;
            numerWersu++;
            printf("\n");
        }
        pozycja++;

     }
//Wypisanie ostatniej linii
     bufor[i+1] = '\0';
            printf("%.8x  ||  ", (numerWersu * dlugoscWersu));
            for(int j = 0; j < dlugoscWersu; j++){
                if((bufor[j] == '\n') || (bufor[j] == '\t') || (bufor[j] == '\r')){
                    printf("%4x", 20);
                } else {
                    printf("%4x", bufor[j]);
                }
            }
            printf("  ||  ");
            for(int j = 0; j < dlugoscWersu; j++){
                if((bufor[j] == '\n') || (bufor[j] == '\t') || (bufor[j] == '\r')){
                    printf("%c", 32);
                } else {
                    printf("%c", bufor[j]);
                }
            }



    free(bufor);
    fclose(fp);
    fp = NULL;

	return 0;

	}
