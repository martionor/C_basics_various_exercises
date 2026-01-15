#include <stdio.h>
#include "book.h"

// Function to save library to a file
void saveLibraryToFile(const char *filename, Book library[], int count) {
    FILE *file = fopen(filename, "w");
    if (!file) {
        printf("Error opening file for writing.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        fprintf(file, "%hu,%s,%hhu\n", library[i].id, library[i].name, (unsigned char)library[i].isLoaned);
    }
    fclose(file);
}

// Function to load library from a file
void loadLibraryFromFile(const char *filename, Book library[], int *count) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Error opening file for reading. Starting with an empty library.\n");
        return;
    }
    while (fscanf(file, "%hu,%49[^,],%hhu\n", &library[*count].id, library[*count].name, (unsigned char *)&library[*count].isLoaned) != EOF) {
        (*count)++;
    }
    fclose(file);
    fclose(file);
}
