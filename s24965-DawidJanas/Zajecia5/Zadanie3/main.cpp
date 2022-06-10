#include <iostream>
#include <unistd.h>
int main(int argc, char *argv[]) {
    pid_t get_pid=getpid();
    int suma = 0;
    pid_t pid=fork();
    int liczba = atoi(argv[1]);
    if (pid>0) {
        for (int i = 0; i <= liczba; ++i)
            suma += i;
    }
    else{
        std::cout<<"Wszystkie liczby nieparzyste w zakresie od 0 do "<<liczba<<" to: ";
        for (int i = 0; i <= liczba; ++i) {
            if (i % 2 == 1) {
                std::cout << i << " ";
            }
        }
        }
    if (get_pid==getpid()){
        int status;
        waitpid(0,&status,0);
        std::cout<<'\n';
        std::cout<<"Suma liczb od "<<liczba<<" wynosi: "<<suma;
    }
    return 0;
}
