#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void handler(int signum){
    if (signum==SIGUSR1) {
        std::cout << "Wyrkyto probe uruchomienia drugiej instancji programu.\n";
    }
}
void handler1(int signum){
        remove("dxt.txt");
    exit(signum);
}
static void handler2(int signal){
    if (signal==SIGUSR1){
        exit(SIGUSR1);
    }
}
int main() {
    pid_t pid=getpid();
    FILE *plik;
    plik=fopen("dxt.txt","r+");
    if (plik){
            int tekst;
            fprintf(plik, "%d", pid);
            rewind(plik);
            fscanf(plik, "%d", &tekst);
            std::cout << tekst;
            fclose(plik);
            signal(SIGUSR1,handler2);
            raise(SIGUSR1);
    } else{
            plik = fopen("dxt.txt", "w+");
            fprintf(plik, "%d", pid);
        fclose(plik);
        signal(SIGUSR1,handler);
        signal(SIGINT,handler1);
        while (true){
            sleep(1);
        }
    }
    return 0;
}
