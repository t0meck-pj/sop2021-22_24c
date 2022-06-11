#include <iostream>
#include <unistd.h>
#include <signal.h>
void handler(int signum){
    std::cout<<"Sygnał dotarł, co spowodowało zakończenie programu.";
    exit(SIGUSR1);
}
int main() {
    pid_t pid = getpid();
    std::cout<<"PID programu: "<<pid<<'\n';
    std::cout<<"Wpisz: 1 . Jest to sygnał który zakończy działanie programu."<<'\n';
    int x=0;
    while (true){
        std::cin>>x;
        if (x==1) {
            handler(SIGUSR1);
        }
    }
    return 0;
}
