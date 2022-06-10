#include <iostream>
#include <vector>
#include <cstdio>
int main(int argc, char *argv[]) {
    FILE *pFfile;
    pFfile = fopen(argv[1],"r");
    if (pFfile) {
        int x;
        int number_of_lines = 0;
        while ((x = getc(pFfile)) != EOF) {
            if ('\n' == x) {
                number_of_lines++;
            }
        }
            fclose(pFfile);
            int *my_ptr;
            my_ptr= (int *)(malloc(sizeof(int) * number_of_lines));
            pFfile = fopen("liczby.txt","r");
            for (int i = 0; i < number_of_lines+1; ++i) {
                fscanf(pFfile, "%i", &my_ptr[i]);
            }
            for (int i=number_of_lines; i>0; i--) {
                std::cout<<my_ptr[i];
            }
        free(my_ptr);
            fclose(pFfile);
        } else {
        int x,y;
        std::cout<<"Ile liczb chcesz wprowadzić?\n";
        std::cin>>x;
        std::vector<int> liczby;
        for (int i = 0; i < x; ++i) {
            std::cout<<"Wprowadź liczbę: ";
            std::cin>>y;
            liczby.push_back(y);
        }
        for (int i = liczby.size()-1; i >= 0; i--) {
            std::cout<<liczby[i];
        }
    }
    return 0;
}
