#include <iostream>
#include <unistd.h>

int main(int argc,char *argv[]) {
    for (int i = 0; i < 100; ++i) {
        pid_t p = fork();
        if (p > 0) {
            int x;
            std::cout<<"Parent: "<<getpid()<<'\n';
            std::cin>>x;
        }else
                std::cout<<"Child: "<<getpid()<<'\n';
    }
    return 0;
}
