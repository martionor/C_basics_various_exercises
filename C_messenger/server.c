#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include "server.h"


#define PORT 8080


void start_server(){
        int server_fd, new_socket;
        struct sockaddr_in address;
        int addrlen = sizeof(address);
        char buffer[1024]= {0};
        
        server_fd = socket(AF_INET, SOCK_STREAM, 0);
        
        if (server_fd < 0){
            perror("socket failed");
            exit(EXIT_FAILURE);
        }
        
        address.sin_family =AF_INET;
        address.sin_addr.s_addr = INADDR_ANY; //Any local IP
        address.sin_port = htons(PORT);
        
        if(bind(server_fd,(struct sockaddr *)&address, (socklen_t *)&addrlen);
        if (new_socket <0){
            perror("accept failed");
            exit(EXIT_FAILURE);
        }
        
        read(new_socket, buffer, 1024);
        printf("Received message: %s\n", buffer);
        
        close(new_socket);
        close(server_fd);
}