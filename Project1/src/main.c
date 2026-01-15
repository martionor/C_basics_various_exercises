#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "book.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <library_file>\n", argv[0]);
        return 1;
    }

    Book library[MAX_BOOKS];
    int count = 0;

    // Load the library from a file
    loadLibraryFromFile(argv[1], library, &count);

    char command[10];
    while (1) {
        printf("Enter command (add, del, list, lall, lone, loan, return, exit): ");
        scanf("%s", command);

        if (strcmp(command, "add") == 0) {
            addBook(library, &count);
        } else if (strcmp(command, "del") == 0) {
            deleteBook(library, &count);
        } else if (strcmp(command, "list") == 0) {
            listAvailableBooks(library, count);
        } else if (strcmp(command, "lall") == 0) {
            listAllBooks(library, count);
        } else if (strcmp(command, "lone") == 0) {
            loneBookDetails(library, count);
        } else if (strcmp(command, "loan") == 0) {
            loanBook(library, count);
        } else if (strcmp(command, "return") == 0) {
            returnBook(library, count);
        } else if (strcmp(command, "exit") == 0) {
            break;
        } else {
            printf("Unknown command!\n");
        }
    }

    // Save the library to the file before exiting
    saveLibraryToFile(argv[1], library, count);
    printf("Library saved. Exiting program.\n");

    return 0;
}
