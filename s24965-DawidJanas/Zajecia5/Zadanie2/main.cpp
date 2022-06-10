#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
    pid_t pid;
    pid_t ppid = getpid();
    pid=fork();
    if (pid>0) {
        std::cout <<"PID: "<< getpid() << '\n';
        std::cout <<"PPID "<< getppid() << '\n';
    }else{
        std::cout<<"PID: "<< getpid() << '\n';
        std::cout<<"PPID: "<< getppid() << '\n';
    }
    if (ppid==getpid()){
        int status;
        waitpid(0,&status,0);
    }
    return 0;
}
