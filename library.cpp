#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Book {
private:
    std::string title;
    std::string author;
    std::string bein;

public:
    Book(std::string t, std::string a, std::string i) : title(t), author(a), bein(i) {}

    std::string getTitle() const { return title; }
    std::string getAuthor() const { return author; }
    std::string getBein() const { return bein; }
};

class User {
private:
    std::string name;
    std::vector<Book> borrowedBooks;

public:
    User(std::string userName) : name(userName) {}

    void borrowBook(const Book& book) {
        borrowedBooks.push_back(book);
        std::cout << name << " borrowed " << book.getTitle() << std::endl;
    }

    void returnBook(const std::string& title) {
        auto it = std::remove_if(borrowedBooks.begin(), borrowedBooks.end(),
            [&title](const Book& book) { return book.getTitle() == title; });
        if (it != borrowedBooks.end()) {
            borrowedBooks.erase(it, borrowedBooks.end());
            std::cout << name << " returned " << title << std::endl;
        } else {
            std::cout << name << " did not borrow " << title << std::endl;
        }
    }

    void showBorrowedBooks() const {
        std::cout << name << "'s borrowed books: ";
        if (borrowedBooks.empty()) {
            std::cout << "None" << std::endl;
        } else {
            for (const auto& book : borrowedBooks) {
                std::cout << book.getTitle() << " ";
            }
            std::cout << std::endl;
        }
    }
};

class Library {
private:
    std::vector<Book> books;

public:
    void addBook(const Book& book) {
        books.push_back(book);
        std::cout << "Added book: " << book.getTitle() << std::endl;
    }

    void removeBook(const std::string& title) {
        auto it = std::remove_if(books.begin(), books.end(),
            [&title](const Book& book) { return book.getTitle() == title; });
        if (it != books.end()) {
            books.erase(it, books.end());
            std::cout << "Removed book: " << title << std::endl;
        } else {
            std::cout << "Book not found: " << title << std::endl;
        }
    }

    void searchBookByTitle(const std::string& title) const {
        for (const auto& book : books) {
            if (book.getTitle() == title) {
                std::cout << "Found book: " << book.getTitle() << " by " << book.getAuthor() << std::endl;
                return;
            }
        }
        std::cout << "Book not found: " << title << std::endl;
    }

    void listBooks() const {
        std::cout << "Library Books:" << std::endl;
        for (const auto& book : books) {
            std::cout << "- " << book.getTitle() << " by " << book.getAuthor() << std::endl;
        }
    }
};

int main() {
    Library library;
    User user1("Bill");

    Book book1("Mckenzi'esBoots", "Unplugged", "Confession of Nairobi women");
    Book book2("2020", "River Between", "67543");
    
    library.addBook(book1);
    library.addBook(book2);
    library.listBooks();

    user1.borrowBook(book1);
    user1.showBorrowedBooks();

    user1.returnBook("2020"); // Trying to return a book not borrowed
    user1.returnBook("Mckenzie'esBoots");
    user1.showBorrowedBooks();

    library.removeBook("2020");
    library.listBooks();

    return 0;
}

