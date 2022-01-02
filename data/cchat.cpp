
// this software is under development
// coded by Mr MJT
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <unistd.h>
#include <fcntl.h>
using namespace std;

void str (char* arr, int length) {
  int i;
  for (i = 0; i < length; i++) {
    if (arr[i] == '\n') {
      arr[i] = '\0';
      break;
    }
  }
}



struct sockaddr_in server;

int main() {
    cout << "Enter your friend's ip:  \n";
    char ip[20];
    fgets(ip, 16, stdin);
    cout << "Enter the port: \n";
    char port[6];
    fgets(port, 6, stdin);
//    cout << "\n";
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
  // Socket created
   cout << "Socket() created\n";
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = inet_addr(ip);
    server.sin_port = htons(atoi(port));
    memset(&server.sin_zero, 0, 8);
    int con = connect(sock, (struct sockaddr*) &server, sizeof(server));
    if (con < 0)
    {
	cout << "Doesnot connected\n";
	exit(1);
    }
    // Connected
    cout << "Connected\n";
    system("clear");
    char clname[20];
    char text[1024];
    char buffer[1024];
    recv(sock, clname, 20, 0);
    send(sock, name, 20, 0);
    str(clname, 20);
    system("bash red");
    printf("%s", clname);
//    system("bash white");
    printf(" Created this room!\n");
    system("bash red");
    printf("You");
//    system("bash white");
    printf(" Joined the room!\n");
    printf("\n");
    for (int i = 0; i < 999999; i++)
    {
        memset(buffer, 0x00, 1024);
        memset(text, 0x00, 1024);
    	system("bash red");
    	// Waiting your friend's message
        printf("%s is typing..\n", clname);
    	char buffer[1024];
    	int r = recv(sock, buffer, 1024, 0);
    	printf("%s: ", clname);
        system("bash white");
        printf("%s\n", buffer);
    	system("bash red");
    //	cout << "\n";
     	printf("%s: ", name);
        system("bash white");
        fgets(text, 1024, stdin);
        str(text, 1024);
    	int s = send(sock, text, strlen(text), 0);
        memset(buffer, 0x00, 1024);
        memset(text, 0x00, 1024);
    }
    // Close the socket
    close(sock);
}
