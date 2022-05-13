#include <iostream>
#include <vector>
int main() {
    int a,b,suma=0;
    std::cout<<"Ile liczb chcesz wprowadzić?"<<'\n';
    std::cin>>b;
    std::vector<int> liczby;
    for (int i = 0; i < b; i++){
        std::cout<<"Wprowadź liczbę: ";
        std::cin>>a;
        liczby.push_back(a);
    }
    for (int i = 0; i < liczby.size(); ++i) {
        suma+=liczby[i];
    }
    std::cout<<"Suma wynosi: "<<suma<<'\n';
    return 0;
}
