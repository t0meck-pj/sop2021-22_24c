#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*
Zajêcia 4: Zadania 1
1. Napisz program obliczaj¹cy sumê liczb wprowadzonych przez u¿ytkownika (ze standardowego wejœcia) i wypisuj¹cy wynik na standardowe wyjœcie.

2. Przerób ten program tak, aby wartoœæ by³a zwracana jako kod zakoñczenia programu. Wyœwietl t¹ wartoœæ w linii komend.

3. Napisz program wyœwietlaj¹cy tradycyjn¹ choinkê o zadanej wysokoœci. Wysokoœæ niech bêdzie podana jako parametr wywo³ania programu.
58 304 40 11

Ad 3.
*/

int main (int argc, const char * argv[]){

    int h = atoi(argv[1]);  //wysokość choinki
    int s = h;  //szerokość choinki
    if((s%2) == 0){
        s++;
    }

    int offset = (s-1);

    for(int i = 1; i <= h; i++){
        for(int j = 0; j < offset+1 - i; j++)
            {printf("  ");}

        for(int k = 0; k < 2*i - 1; k++)
            {printf("* ");}

        printf("\n");
    }
	return 0;
	}

