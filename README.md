# onlinelibrarysystem
introduction

This project is  an onlinelibrarysystem implemented in C++.The system provides functionalities such as 
managing the collection of books ,adding and removing books,searching for books ,managing borrowing and returning capabilities
users can search for books , can borrow and return books, library manages the collection of books,
allowing adding and removal of books and searching of books by title 


 Setup and compilation 
 To run the onlinelibrarysystem, you will need a C++ compiler such as g++ on linux or MinGW on 
 windows 
 follow  the steps below
1.save the provided file 
2 open a terminal or command prompt and navigate to the directory containing the code file 
3.compile the code using the C++ compiler
4.after successful compilation run the executable.



Usage 

1.adding a book 
 To add a book to the library use the 'addbook' method of the 'library' class
 example :
   ""cpp
   library library;
   Book newBook(" colonel 123");
   library.addBook(newBook);

   2.removing a book

   To remove a book from the library use the 'removeBook' method with the title of the book 
example:
""cpp
library.removeBook('colonel 123');

3.search for a book

    To search a book from the library use the 'searchBook' method with the title of the book 

example:

""cpp
library.searchBook('colonel 123');

4.Registering a new user 
 To register a new user in the library system , library class will create a 'user'object and use the 
 'registeruser' method 
 example 
 ""cpp
 User newUser('Bill');
 library.registeruser(newUser);

 5.Borrow a book
 user class will check if the book is available and then it will add into it users 'borrowedBooklist';


Conclusion 
The online library system will allow clients to search ,borrow and return books and the
 library to manage the collection of books, add and remove  books



