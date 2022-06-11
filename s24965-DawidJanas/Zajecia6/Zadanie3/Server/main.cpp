#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

void handler(int signum){
    std::cout<<"[1]Exit program\n";
    exit(SIGINT);
}
int main() {
    int listenfd;
    int connfd;
    int n;
    char sendBuff[256];
    struct sockaddr_in serv_addr;
    listenfd = socket(AF_INET,SOCK_STREAM,0);
    memset(sendBuff,'0', sizeof(sendBuff));
    memset(&serv_addr,'0', sizeof(serv_addr));
    serv_addr.sin_family=AF_INET;
    serv_addr.sin_addr.s_addr= htonl(INADDR_ANY);
    serv_addr.sin_port= htons(5000);
    bind(listenfd,(struct sockaddr*)&serv_addr,sizeof(serv_addr));
    std::cout<<"Waiting for a client to connect..."<<'\n';
    listen(listenfd,5);
    /*FILE *plik,*plik1;
    plik1= fopen("logi.txt","w+");
    plik=fopen("file.txt","w+");*/
    signal(SIGINT,handler);
    while (1) {
        connfd = accept(listenfd, 0, 0);
        strcpy(sendBuff, "Wybierz plik jaki chcesz pobrać: \n");
        write(connfd, sendBuff, strlen(sendBuff));
        memset(sendBuff, '0', sizeof(sendBuff));
        strcpy(sendBuff, "[1]file.txt");
        write(connfd, sendBuff, strlen(sendBuff));
        memset(sendBuff, '0', sizeof(sendBuff));
        n = read(connfd,sendBuff, sizeof(sendBuff)-1);
        for (int i = 0; i < n; ++i) {
            std::cout<<sendBuff[i];
        }
        memset(sendBuff,'0', sizeof(sendBuff));
    }
    return 0;
}
