#include <iostream>
#include <unistd.h>
int main(int argc,char *argv[]) {
    pid_t p = fork();
    pid_t second_master_pid=getpid();
    for (int i = 0; i < 2; ++i) {
        if (second_master_pid==getpid()){
            int status;
            waitpid(0,&status,0);
            for (int j = 0; j < 3; ++j) {
                if (p > 0) {
                    std::cout << "Parent: " << getpid() << '\n';
                } else {
                    std::cout << "Child: " << getpid() << '\n';
                    exit(0);
                }
                p=fork();
            }
        }
            if (p > 0) {
                std::cout << "Parent: " << getpid() << '\n';
                int x;
                std::cin >> x;
            } else {
                std::cout << "Child: " << getpid() << '\n';
            }
            p = fork();
    }

    return 0;
}
