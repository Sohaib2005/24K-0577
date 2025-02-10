#include <iostream>
using namespace std;

class Book {	
private:
    string title;
    string ISBN;  // Changed from Isbn to ISBN
    string writer;
    string publisherName;

public:
    void setBookDetails(string title, string ISBN, string writer, string publisherName) {
        this->title = title;
        this->ISBN = ISBN;
        this->writer = writer;
        this->publisherName = publisherName;	 	
    } 

    string getBookDetails() {
        return writer + " " + title + " " + ISBN + " " + publisherName;
    }			
};

int main(int argc, char* argv[]) {
    int totalBooks = 2, count = 0;  // Changed argIndex to count
    Book books[totalBooks];

    if (argc != 4 * totalBooks + 1) {
        cout << "Insufficient Arguments!" << endl;
        return 1;	
    } else {
        for (int i = 0; i < totalBooks; i++) {
            string bookTitle, ISBN, authorName, publisher;
            bookTitle = argv[++count];
            ISBN = argv[++count];
            authorName = argv[++count];
            publisher = argv[++count];	
            books[i].setBookDetails(bookTitle, ISBN, authorName, publisher);				
        }
        
        for (int i = 0; i < totalBooks; i++) {
            cout << "Book " << i + 1 << " Information: ";
            cout << books[i].getBookDetails() << endl;
        }
    }
    
    return 0;	
}
