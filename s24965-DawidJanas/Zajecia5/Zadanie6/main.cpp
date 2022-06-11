#include <iostream>
#include <unistd.h>
int main(int argc,char *argv[]) {
    pid_t p =fork();
    char const *folder= getenv("TMPDIR");
    if (folder==0){
        folder="/tmp";
        FILE *fp;
        fp= fopen("file.txt","w");
        char str[20]="Good morning";
        if (fp) {
            for (int i = 0; i < strlen(str); ++i) {
                putc(str[i], fp);
            }
        }
        fclose(fp);
    }
    /*if (p > 0){
        fp= fopen("file.txt","w");
                char str1[20];
        if (fp){
            for (int i = 0; i < strlen(str1); ++i) {
                putc(str1[i],fp);
            }
        }
    } else{
        fp= fopen("file.txt","w");
        char str[20]="Good morning";
        if (fp){
            for (int i = 0; i < strlen(str); ++i) {
                putc(str[i],fp);
            }
        }
    }*/
    return 0;
}
