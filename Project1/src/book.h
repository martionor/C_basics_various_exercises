#ifndef BOOK_H
#define BOOK_H

#include <stdbool.h>

#define MAX_BOOKS 100

// Definition of the Book struct
typedef struct {
    char name[50];          // Name of the book (max 50 characters)
    unsigned short id;      // ID of the book (16 bits)
    bool isLoaned;          // Whether the book is currently loaned (boolean)
} Book;

// Function prototypes
int addBook(Book library[], int *count);
int deleteBook(Book library[], int *count);
int listAvailableBooks(Book library[], int count);
int listAllBooks(Book library[], int count);
int loanBook(Book library[], int count);
int returnBook(Book library[], int count);
int loneBookDetails(Book library[], int count);
int saveLibraryToFile(const char *filename, Book library[], int count);
int loadLibraryFromFile(const char *filename, Book library[], int *count);

#endif // BOOK_H
