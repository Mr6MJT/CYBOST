// this software is under development
// Coded by Mr MJT
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
using namespace std;
struct sockaddr_in server;
void str (char* arr, int length) {
  int i;
  for (i = 0; i < length; i++) { 
    if (arr[i] == '\n') {
      arr[i] = '\0';
      break;
    }
  }
}
int main() {
    cout << "Enter your ip:  \n";
    char ip[20];
    fgets(ip, 16, stdin);
    cout << "Enter the port: \n";
    char port[6];
    fgets(port, 6, stdin);
    char name[20];
    printf("Enter your name: \n");
    fgets(name, 20, stdin);
    str(name, 20);
    int sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (sock < 0)
    {
	cout << "Socket() not created\n";
	exit(1);
    }
    cout << "Socket() created\n";
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = inet_addr(ip);
    server.sin_port = htons(atoi(port));
    memset(&server.sin_zero, 0, 8);
    int bnd = bind(sock, (struct sockaddr*) &server, sizeof(server));
    if (bnd < 0)
    {
	    cout << "Bind() error\n";
            exit(1);
    }
    cout << "Binded to the local address\n";
    int nRet = listen(sock, 5);
    if (nRet < 0)
    {
	    cout << "Listen() error";
            exit(1);
    }
    cout << "Started listining\n";
    int c = sizeof(struct sockaddr_in);
    int acc = accept(sock, (struct sockaddr*) &server, (socklen_t*)&c);
    if (acc < 0)
    {
	    cout << "Accept() failed\n";
	    exit(1);
    }
    cout << "Accepted succesfully\n";
    system("clear");
    char clname[20];
    send(acc, name, 20, 0);
    recv(acc, clname, 20, 0);
    char buffer[1024];
    char text[1024];
    str(clname, 20);
    system("bash red");
    printf("You");
//    system("bash white");
    printf(" Created this room!\n");
    system("bash red");
    printf("%s", clname);
//    system("bash white");
    printf(" Joined this room!\n");
    printf("\n");
    for (int i = 0; i < 999999; i++)
    {
        memset(buffer, 0x00, 1024);
        memset(text, 0x00, 1024);
	system("bash red");
	printf("%s: ", name);
	//char text[1024];
        system("bash white");
	fgets(text, 1024, stdin);
	str(text, 1024);
//        text[strlen(text)-1]='\0';
	int s = send(acc, text, strlen(text), 0);
	system("bash red");
	printf("%s is typing..\n", clname);
	//char buffer[1024];
	int r = recv(acc, buffer, 1024, 0);
	printf("%s: ", clname);
        system("bash white");
        printf("%s\n", buffer);
        memset(buffer, 0x00, 1024);
        memset(text, 0x00, 1024);
   }
    close(acc);
}
