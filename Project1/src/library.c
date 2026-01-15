#include <stdio.h>
#include "book.h"

#define MAX_BOOKS 100 // Define the maximum number of books

Book library[MAX_BOOKS]; // Fixed-size array

// Function to list all available books
// Returns 0 if successful
int listAvailableBooks(Book library[], int count) {
    printf("Available Books:\n");
    for (int i = 0; i < count; i++) {
        if (!library[i].isLoaned) {
            printf("ID: %hu, Name: %s\n", library[i].id, library[i].name);
        }
    }
    return 0; // Success
}

// Function to add a new book to the library
// Takes the library array and a pointer to the book count, returns 0 on success, -1 if library is full
int addBook(Book library[], int *count) {
    //Check if there is space for a new book
    if (*count >= MAX_BOOKS){
        printf("Library is full!\n");
        return -1; //Return error if library is full
    }

    //Create a new book entry
    Book newBook;

    //Get book details from the user
    printf("Enter name of the book: ");
    scanf(" %[^\n]", newBook.name); //Read a string with spaces
    printf("Enter book ID (0-65535): ");
    scanf("%hu", &newBook.id);

    //Initialize loan status
    newBook.isLoaned = false; //New book is not loaned out

    //Add the new book to the library
    library[*count]= newBook; //Store the new book in the library
    (*count)++; //Increment the count of books

    printf("Book added succesfully: %s (ID: %u) \n", newBook.name, newBook.id);
    return 0; // Success
}

    // Function to delete a book from the library by ID
    // Ask the user for the ID of the book to delete
    // Returns 0 if deleted, -1 if book not found
int deleteBook(Book library[], int *count) {
    unsigned int id;
    printf("Enter the ID of the book to delete: ");
    scanf("%u", &id);

    // Find the book with the specified ID
    for (int i = 0; i < *count; i++) {
        if (library[i].id == id) {
            // Shift the remaining books down
            for (int j = i; j < *count - 1; j++) {
                library[j] = library[j + 1];
            }
            (*count)--; // Decrement the book count
            printf("Book with ID %u deleted.\n", id);
            return 0; //Success
        }
    }
    printf("Book with ID %u not found.\n", id);
    return -1; //Book not found
}



// Function to list all books in the library, regardless of loan status
// Returns 0 if successful
int listAllBooks(Book library[], int count) {
    printf("All Books:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %hu, Name: %s, Loaned: %s\n", library[i].id, library[i].name,
               library[i].isLoaned ? "Yes" : "No");
    }
    return 0; //Success
}

//Function to loan a book by ID
//Takes the Library array and the book count
// Returns 0 if successful, -1 if book is not found or already loaned
int loanBook(Book library[], int count) {
    unsigned int id; // Variable to store the ID of the book to loan
    printf("Enter the ID of the book to loan: ");
    scanf("%u", &id); //Read the book ID from user

    // Search for the book with the specified ID
    for(int i = 0; i < count; i++){
        if (library[i].id == id){// If book is found
            if (library[i].isLoaned){// Check if book is already loaned
                printf("Book is already loaned out. \n");
                return -1; // Book already loaned
            }else {
                library[i].isLoaned = true; // Mark the book as loaned
                printf("Book with ID %u loaned out. \n", id);
                return 0; //Success
            }
        }
    }
    //If book is not found, display a message
    printf("Book with ID %u not found. \n", id);
    return -1; // Book not found
}

int returnBook(Book library[], int count) {
    // Empty for now
}

int loneBookDetails(Book library[], int count) {
    // Empty for now
}

int saveLibraryToFile(const char *filename, Book library[], int count) {
    // Your implementation here
}

int loadLibraryFromFile(const char *filename, Book library[], int *count) {
    // Your implementation here
}
