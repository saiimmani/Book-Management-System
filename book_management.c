#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Defining the structure to store book details
struct library {
    char book_name[100];
    char author_name[100];
    float cost;
    int no_of_pages;
};

// Function to update book details
void updateBookDetails(struct library lib[], int count) {
    char bookName[100];
    int found = 0;

    if (count == 0) {
        printf("\nNo books available to update!\n");
        return;
    }

    printf("\nEnter the name of the book you want to update: ");
    scanf(" %[^\n]s", bookName);

    for (int k = 0; k < count; k++) {
        if (strcmp(lib[k].book_name, bookName) == 0) {
            found = 1;
            printf("\nBook found. Enter new details:\n");
            printf("Enter the new book name: ");
            scanf(" %[^\n]s", lib[k].book_name);
            printf("Enter the new author name: ");
            scanf(" %[^\n]s", lib[k].author_name);
            printf("Enter the new number of pages: ");
            scanf("%d", &lib[k].no_of_pages);
            printf("Enter the new cost of the book: ");
            scanf("%f", &lib[k].cost);
            printf("\nBook details updated successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("\nBook not found in the library.\n");
    }
}

int main() {
    struct library lib[100]; // Array to store multiple books
    int i = 0, j, count = 0;

    while (1) {
        printf("\n1. Add Book details\n");
        printf("2. Display the list of books and their details\n");
        printf("3. Display the total number of books in the library\n");
        printf("4. Update book details\n");
        printf("5. Exit\n");
        printf("Enter the number: ");
        scanf("%d", &j);

        switch (j) {
            case 1:
                printf("\nEnter the book name: ");
                scanf(" %[^\n]s", lib[i].book_name);
                printf("Enter the author name: ");
                scanf(" %[^\n]s", lib[i].author_name);
                printf("Enter the number of pages: ");
                scanf("%d", &lib[i].no_of_pages);
                printf("Enter the cost of the book: ");
                scanf("%f", &lib[i].cost);
                count++;
                i++;
                printf("\nBook added successfully!\n");
                break;

            case 2:
                if (count == 0) {
                    printf("\nThere are no books stored!\n");
                } else {
                    printf("\nList of Books in the Library:\n");
                    for (int k = 0; k < count; k++) {
                        printf("\nBook %d:\n", k + 1);
                        printf("Book Name: %s\n", lib[k].book_name);
                        printf("Author Name: %s\n", lib[k].author_name);
                        printf("Number of Pages: %d\n", lib[k].no_of_pages);
                        printf("Cost: $%.2f\n", lib[k].cost);
                    }
                }
                break;

            case 3:
                printf("\nTotal number of books in the library: %d\n", count);
                break;

            case 4:
                updateBookDetails(lib, count);
                break;

            case 5:
                printf("\nThank you for using the Library Management System!\n");
                exit(0);

            default:
                printf("\nInvalid number entered. Please try again.\n");
        }
    }

    return 0;
}
