#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
    int id;
    string title;
    string author;
    bool isIssued;

public:
    Book(int i, string t, string a) {
        id = i;
        title = t;
        author = a;
        isIssued = false;
    }

    int getId() { return id; }
    string getTitle() { return title; }
    string getAuthor() { return author; }
    bool getStatus() { return isIssued; }

    void issueBook() { isIssued = true; }
    void returnBook() { isIssued = false; }

    void display() {
        cout << "ID: " << id 
             << "\nTitle: " << title 
             << "\nAuthor: " << author 
             << "\nStatus: " << (isIssued ? "Issued" : "Available") 
             << "\n----------------------------\n";
    }
};

class Library {
    vector<Book> books;

public:
    void addBook(int id, string title, string author) {
        books.push_back(Book(id, title, author));
        cout << "Book added successfully!\n";
    }

    void displayAll() {
        if (books.empty()) {
            cout << "No books available!\n";
            return;
        }
        for (auto &b : books)
            b.display();
    }

    void searchBook(string title) {
        for (auto &b : books) {
            if (b.getTitle() == title) {
                b.display();
                return;
            }
        }
        cout << "Book not found!\n";
    }

    void issueBook(int id) {
        for (auto &b : books) {
            if (b.getId() == id) {
                if (!b.getStatus()) {
                    b.issueBook();
                    cout << "Book issued successfully!\n";
                } else {
                    cout << "Book already issued!\n";
                }
                return;
            }
        }
        cout << "Book ID not found!\n";
    }

    void returnBook(int id) {
        for (auto &b : books) {
            if (b.getId() == id) {
                if (b.getStatus()) {
                    b.returnBook();
                    cout << "Book returned successfully!\n";
                } else {
                    cout << "Book was not issued!\n";
                }
                return;
            }
        }
        cout << "Book ID not found!\n";
    }
};

int main() {
    Library lib;
    int choice, id;
    string title, author;

    while (true) {
        cout << "\n==== Library Menu ====\n";
        cout << "1. Add Book\n2. Display All Books\n3. Search Book\n4. Issue Book\n5. Return Book\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter ID, Title, Author: ";
                cin >> id;
                cin.ignore();
                getline(cin, title);
                getline(cin, author);
                lib.addBook(id, title, author);
                break;
            case 2:
                lib.displayAll();
                break;
            case 3:
                cout << "Enter Title: ";
                cin.ignore();
                getline(cin, title);
                lib.searchBook(title);
                break;
            case 4:
                cout << "Enter Book ID to issue: ";
                cin >> id;
                lib.issueBook(id);
                break;
            case 5:
                cout << "Enter Book ID to return: ";
                cin >> id;
                lib.returnBook(id);
                break;
            case 6:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice!\n";
        }
    }
}
