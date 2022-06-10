#include <iostream>
#include <unistd.h>
int main(int argc,char *argv[]) {
    pid_t master=getpid();
    for (int i = 0; i < 100; ++i) {
        pid_t p=fork();
        if (p>0){
            std::cout<<"Parent: "<<getpid()<<'\n';
        } else{
            std::cout<<"Child: "<<getpid()<<'\n';
            exit(0);
        }
    }
    if (master==getpid()){
        int status;
        waitpid(0,&status,0);
    }
    int x;
    std::cin>>x;
    return 0;
}
