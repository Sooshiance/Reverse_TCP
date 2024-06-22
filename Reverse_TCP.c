#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h> 

#define PROGRAM_NAME "cell"
#define PROGRAM_VERSION "1.0"

void printHelp() {
    printf("Usage: %s <address> <port>\n", PROGRAM_NAME);
    printf("Connects to a remote shell on the specified address and port.\n");
}

void printVersion() {
    printf("%s version %s\n", PROGRAM_NAME, PROGRAM_VERSION);
}

int main(int argc, char *argv[]) {
    if (argc == 2) {

        if (strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-h") == 0) {
            printHelp();
            return 0;
        }

        if (strcmp(argv[1], "--version") == 0 || strcmp(argv[1], "-v") == 0) {
            printVersion();
            return 0;
        }
    }

    if (argc != 3) {
        printf("Invalid number of arguments. Use '%s --help' for usage.\n", PROGRAM_NAME);
        return 1;
    }

    char* ip = argv[1];
    int port = atoi(argv[2]);
    struct sockaddr_in revsockaddr;

    return 1;
}