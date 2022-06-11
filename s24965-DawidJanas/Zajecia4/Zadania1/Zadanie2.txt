#include <iostream>
#include <vector>
 int suma(std::vector<int> liczby,int x , int y){
    int suma=0;
    for (int i = 0; i < x; ++i) {
        std::cout<<"Wprowadź liczbę: ";
        std::cin>>y;
        liczby.push_back(y);
    }
    for (int i = 0; i < liczby.size(); ++i) {
        suma += liczby[i];
    }
    std::cout<<"Suma wynosi: ";
     return suma;
}

int main() {
    int x,y=0;
    std::cout<<"Wprowadź ilość liczb: ";
    std::cin>>x;
    std::vector<int> liczby;
    std::cout<<suma(liczby,x,y);
    return 0;
}
