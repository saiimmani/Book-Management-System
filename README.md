# Book Management System

This is a beginner-friendly C program to manage book information, allowing users to add, view, update, and count books stored in a simple structure. The program runs in a console environment and is easy to understand for those new to C programming.

---

## Features

1. **Add Book Details**: Add a new book with its name, author, cost, and number of pages.  
2. **View Book List**: Display the list of all books and their details.  
3. **Count Total Books**: Display the total number of books in the system.  
4. **Update Book Details**: Search for a book by its name and update its details.  
5. **Exit**: Close the program.

---

## Prerequisites

- A C compiler (e.g., GCC or any IDE with C support).
- Basic understanding of C programming, including arrays, structures, and loops.

---

## How to Compile and Run

1. Clone or download the project files.
2. Open a terminal or your preferred IDE.
3. Compile the program with the following command:
   ```
   gcc book_management.c -o book_management
   ```
4. Run the compiled executable:
   ```
   ./book_management
   ```

---

## Usage Instructions

1. When the program starts, a menu with options is displayed.
2. Enter the corresponding number for the desired action:
   - **1** to add a book.
   - **2** to view all books.
   - **3** to display the total count of books.
   - **4** to update an existing book.
   - **5** to exit the program.

3. Follow the prompts to input book details or perform updates.

---

## Example Interaction

```
1. Add Book details
2. Display the list of books and their details
3. Display the total number of books
4. Update book details
5. Exit
Enter the number: 1

Enter the book name: The Catcher in the Rye
Enter the author name: J.D. Salinger
Enter the number of pages: 277
Enter the cost of the book: 10.50

Book added successfully!

Enter the number: 2

List of Books:

Book 1:
Book Name: The Catcher in the Rye
Author Name: J.D. Salinger
Number of Pages: 277
Cost: $10.50

Enter the number: 3

Total number of books: 1

Enter the number: 4

Enter the name of the book to update: The Catcher in the Rye
Book found. Enter new details:
Enter the new book name: The Catcher in the Rye (Revised)
Enter the new author name: J.D. Salinger
Enter the new number of pages: 280
Enter the new cost of the book: 12.99

Book details updated successfully!

Enter the number: 5

Thank you for using the Book Management System!
```

---

## Learning Objectives

This project is designed for beginners to learn:
- How to use structures to store and manipulate data.
- Basic menu-driven programming using loops and switch statements.
- User input handling with strings and numeric data.
- Implementing update functionalities and searching data in arrays.

---

## Possible Extensions

- **File Handling**: Save book details to a file for persistence.
- **Search Improvements**: Allow partial matches for book names.
- **Sorting**: Add functionality to sort books by name, author, or cost.
- **Deletion**: Allow users to remove books from the list.

---

Enjoy learning and enhancing this project! 🚀
