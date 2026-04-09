#include <iostream>
#include <string>
#include <utility>

using namespace std;

class Book {
private:
    string bookTitle;
    int totalCopies;

public:
    Book(string title, int copies)
        : bookTitle(std::move(title)), totalCopies(copies >= 0 ? copies : 0) {}

    void issueBook() {
        if (totalCopies > 0) {
            totalCopies--;
            cout << "[Success] | Issued: " << bookTitle << "\nCopies left: " << totalCopies << endl;
        } else {
            cout << "\n" << bookTitle << "' is currently out of stock!" << endl;
        }
    }

    void returnBook() {
        totalCopies++;
        cout << "\nReturned: " << bookTitle << ".\nNew count: " << totalCopies << endl;
    }

    void display() const {
        cout << "\033[32m" << "\n           Library Status" << "\033[0m" << endl;
        cout << "Title  : " << bookTitle << endl;
        cout << "Copies : " << totalCopies << endl;
        cout << "\033[1m" << "------------------" << "\033[0m" << endl;
    }
};

int main() {
    Book book("The Design of Everyday Things", 1);

    book.display();

    book.issueBook();
    book.issueBook();

    book.returnBook();
    book.display();

    return 0;
}
