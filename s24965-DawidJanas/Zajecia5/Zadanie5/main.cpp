#include <iostream>
#include <vector>

int main() {
    FILE *plik;
    plik = fopen("file.txt" , "r");
    char tekst1[] ="Witaj okrutny świecie";
    std::string tekst2;
    std::cout<<"string: "<<tekst1<<'\n';
    std::cout<<"hexval: ";
    for (const auto &item:tekst1) {
        std::cout<<std::hex<<int (item);
    }
    std::cout<<'\n';
    std::vector<int> tekst;
    int i;
    if (plik) {
        while (i != EOF) {
            i = fgetc(plik);
            tekst.push_back(i);
        }
    }
    for (int j=0; j<tekst.size(); j++) {
        if (j%8==0){
            std::cout<<'\n';
        }
        std::cout<<std::hex<<tekst[j];
        std::cout<<" ";
    }
    std::cout<<'\n';
    std::cout<<tekst.size();
    return 0;
}
