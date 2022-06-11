#include <iostream>
#include <stdio.h>

using namespace std;

int ciagFib(int liczba);

int main() {
    int liczbaElementow, i, nastepna = 1, liczba = 0;

    cout << "Podaj liczbe elementow ciagu Fibonacciego: ";
    cin >> liczbaElementow;

    cout << endl;
    
    cout << "Wersja rekurencyjna:" << endl;
    for (i = 0; i < liczbaElementow; i++) {
        cout << "Element " << i+1 << ". = " << ciagFib(i) << endl;
    }
    
    cout << endl;

    cout << "Wersja iteracyjna:" << endl;
    for (i = 0; i < liczbaElementow; i++) {
        if (i == 0)  {
            cout << "Element " << i+1 << ". = " << 0 << endl;
        } else {
            cout << "Element " <<  i+1 << ". = " << nastepna << endl;
            nastepna += liczba;
            liczba = nastepna - liczba;
        }
    }

    cout << endl;

    return 0;
}

int ciagFib(int liczba) {
    if (liczba == 0) 
	    return 0;
    if (liczba == 1) 
	    return 1;
    return (ciagFib(liczba - 1) + ciagFib(liczba - 2));
}
