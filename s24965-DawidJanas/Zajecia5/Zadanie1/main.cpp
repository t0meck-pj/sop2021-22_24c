#include <iostream>
#include <unistd.h>

int main(int argc, char** argv) {
    int x;
        std::cout << "PID: " << getpid() << '\n';
        std::cout << "PPID: " << getppid() << '\n';
        std::cout << "Teraz nic nie wpisuj i zabij ten program za pomocą komendy kill\n";
    std::cin>>x;
    return 0;
}
