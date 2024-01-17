//NAME: SYARIFAH DANIA BINTI SYED ABU BAKAR
//MATRIC NO: A23CS0183
//NAME: AIN NURNABILA BINTI MOHD AZHAR
//MATRIC NO: A23CS0207
#include<iostream>
#include<string>
using namespace std;

const int MAX_BOOKS = 100; //declaring maximum amount of books that can be entered

string title[MAX_BOOKS]; /*declaring array title, author and year with capacity of MAX_BOOKS */
string author[MAX_BOOKS];
int year[MAX_BOOKS];
int bookcount = 0;

// function prototypes
void displayMainMenu();
void addBook();
void displayLibrary();
void searchByTitle();

// main function
int main() {
    int choice;

    do {
        displayMainMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); 

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayLibrary();
                break;
            case 3:
                searchByTitle();
                break;
            case 4:
                cout << "\nGoodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}

void displayMainMenu() {
    cout << "<<<<<Library Management System>>>>>" << endl;
    cout << "=======================================" << endl;
    cout << "1. Add a book" << endl;
    cout << "2. Display Library" << endl;
    cout << "3. Search by Title" << endl;
    cout << "4. Quit" << endl;
}

void addBook() { //this function enables user to add book, author and the year of publication and to update the book count
    if (bookcount < MAX_BOOKS) {
        cout << "\nEnter book title: ";
        getline(cin, title[bookcount]);
        cout << "\nEnter author name: ";
        getline(cin, author[bookcount]);
        cout << "\nEnter publication year: ";
        cin >> year[bookcount];
        cout << "\nBook added successfully!\n";
        bookcount++;
    } else {
        cout << "Library is full. Cannot add more books.\n";
    }
}

void displayLibrary() { //this function displays all the information of the books added in the library 
    if (bookcount == 0) {
        cout << "No books added in the library yet.\n";
    } else {
        cout << "\nLibrary Contents:\n";
        cout << "===================\n";

        for (int i = 0; i < bookcount; i++) {
            cout << "Title: " << title[i] << endl;
            cout << "Author: " << author[i] << endl;
            cout << "Publication Year: " << year[i] << endl << endl;
        }
    }
}

void searchByTitle() { //this function enables user to search for the books that are added in the library
    string booksearch;
    cout << "Enter Title: ";
    getline(cin, booksearch);
   
    for (int i = 0; i < bookcount; i++) {
        if (booksearch == title[i]) {
            cout << "Book found:\n";
            cout << "Title: " << title [i] << endl;
            cout << "Author: " << author [i] << endl;
            cout << "Publication Year: " << year [i] << endl << endl;
        	cin.ignore();
		}
}
        	cout << "Book not found.\n";
          	cin.ignore();
    	}