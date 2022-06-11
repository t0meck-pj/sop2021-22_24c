#include <iostream>

int main() {
    int wysokość=0;
    std::cout<<"Wprowadź wysokość: ";
    std::cin>>wysokość;
    for (int i = 0; i < wysokość; ++i) {
        const int miejsca=wysokość - i;
        for (int j = 0; j < miejsca; ++j) {
            std::cout<<" ";
        }
        const int gwiazdki=i*2+1;
        for (int j = 0; j < gwiazdki; ++j) {
            std::cout<<"*";
        }
        std::cout<<'\n';
    }
    for (int i = 0; i < wysokość; ++i) {
        std::cout<<" ";
    }
    std::cout<<"*";
    return 0;
}
