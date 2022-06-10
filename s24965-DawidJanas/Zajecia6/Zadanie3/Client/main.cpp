#include <iostream>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

int main() {
    int sockfd;
    int wyraz;
    char recevBuff[256];
    sockfd = socket(AF_INET,SOCK_STREAM,0);
    struct sockaddr_in serv_addr;
    memset(recevBuff,'0', sizeof(recevBuff));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(5000);
    serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    bind(sockfd,(struct sockaddr*)&serv_addr, sizeof(serv_addr));
    connect(sockfd,(struct sockaddr*)&serv_addr, sizeof(serv_addr));
    wyraz =read(sockfd,recevBuff, sizeof(recevBuff));
    for (int i = 0; i < wyraz; ++i) {
        std::cout<<recevBuff[i];
    }
    memset(recevBuff,'0', sizeof(recevBuff));
    wyraz =read(sockfd,recevBuff, sizeof(recevBuff));
    for (int i = 0; i < wyraz; ++i) {
        std::cout<<recevBuff[i];
    }
    std::cout<<'\n';
    memset(recevBuff,'0', sizeof(recevBuff));
    std::string data;
    std::cout<<">";
    getline(std::cin,data);
    strcpy(recevBuff,data.c_str());
    write(sockfd,recevBuff, strlen(recevBuff));
        /*getline(std::cin,data);
        memset(recevBuff,'0', sizeof(recevBuff));
        strcpy(recevBuff,data.c_str());
        bytesWritten += write(sockfd,(char*)&recevBuff, strlen(recevBuff));
        memset(recevBuff,'0', sizeof(recevBuff));
        bytesRead += read(sockfd,(char*)&recevBuff, sizeof(recevBuff));
        std::cout<<"Server: "<<recevBuff<<'\n';

    /*wyraz=read(sockfd,recevBuff, sizeof(recevBuff)-1);
    for (int i = 0; i < wyraz; ++i) {
        std::cout<<recevBuff[i];
    }
    std::cout<<'\n';
    memset(recevBuff,'0', sizeof(recevBuff));
    wyraz= read(sockfd,recevBuff, sizeof(recevBuff)-1);
    for (int i = 0; i < wyraz; ++i) {
        std::cout<<recevBuff[i];
    }
    memset(recevBuff,'0', sizeof(recevBuff));
    std::cout<<'\n';
    std::cin>>x;
    char const *pchar = x.c_str();
    strcpy(recevBuff, pchar);
    write(sockfd,recevBuff, strlen(recevBuff));

    while (1){
        n = read(sockfd,recevBuff, sizeof(recevBuff));
        recevBuff[n];
    }*/

    return 0;
}
