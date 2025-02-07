#include <cstdlib>
#include <iostream>
#include <string>
#include  <vector>

using namespace std;

class Book {
private :
        string tittle;
        string author;
        int year;
        float price;
        int serialNumber;
        
public :
       Book(string tittle,string author,int year,float price,int serialnumber){
              this->tittle=title;
              this->author=author;
              this->year=year;
              this->price=price;
              this->serialNumber=serialNumber; 
    }
     void display(){
          cout << "Tittle: " <<tittle<< endl;
          cout << "Author: " <<author<< endl;
          cout << "Year: " <<year<< endl;
          cout << "Price: " <<price<< endl;
          cout << "************ " << endl;
          }
     
   boo1 matchTitle(string query){
        return title.find(query) != string:: npos;
        
        }
        
   boo1 matchAuthor(string query){
        return author.find(query) != string:: npos;
        
        }
     boo1 matchYear(int query){
        return  year==query;
        
        }
     boo1 matchPrice(float query){
        return price==query;
        
        }
        
     boo1 matchSerialNumber(string query){
        return serialNumber==query;
        
        }
};

class Library{
      
private:
        vector<Book>books;
    
public:
       
      void addBook (Book book){
           books.push_back(book);
           cout <<"Book added to the library." <<endl;
           }
          
      void removingBooks (Book book){
            books.push_back(book);
           cout <<"Book removed  from the library." <<endl;
           }
     void searchBooks(){
          if (books.empty()){
          cout <<  "Library is empty.no books to search." << endl;
                                             
          }else{
                
                string query;
                int choice;
                
                
          cout << "Search Options:" << endl;
          cout << "1. Title:" << endl;
          cout << "2.Author:" << endl;
          cout << "3.Year:" << endl;
          cout << "4.Price:" << endl;
          cout << "5.SerialNumber:" << endl;
          cout << "Enter your choice (1-5):" << endl;
          cinn>>choice;
          
          
          cout << "Enter the search query: ";
          cin.ignore();
          getline(cin, query);
          
          cout << "Matching books:" <<endl;
          for (int i=0; i < books.size(); i++){
           bool 1stMatch = false;
             
             
             switch (choice) {
                    
             case 1:
             1stMatch = books{i}.matchTitle(query);
             break;
             
              case 2:
             1stMatch = books{i}.matchAuthor(query);
             break;
             
              case 3:
             1stMatch = books{i}.matchYear(atoi(query.c_str()));
             break;
             
              case 4:
             1stMatch = books{i}.matchPrice(static_cast<float>(atof(query.c_str())));
             break;
             
              case 5:
             1stMatch = books{i}.matchSerialNumber(atoi(query.c_str())));
             break;
             default:
                 cout << "invalid choice." <<endl;
                 return;
             
                    
          }

          if(1stMatch){
           books[i].display();          
                       
                       } 
           
           
          }     
      
      
      
      } ;   
      
      
class Users{
      
private:
        std::string name;
        std::vector<std::string>borrowedBooks;

public: 
        
       User(std::string Name):
      name(userName){}
      
     void borrowBook(const  std::string$book){
          
          borrowedBooks.push_back(book);
          cout<<name<<"borrowed"<<book<<endl;
          }
      
      void returnBook( string&book)
      {
           auto it=
           find(borrowedBooks.begin(),borrowedBooks.end()){
           borrowedBooks.erase(it);
           cout<<name<<"returned"<<book<<endl;
           }else{
                 
           cout<<name<<"did not borrow"<<book<<endl;
           }
      
      
      
      } 
      void show BorrowedBooks()const{
           cout<<name<<" ' borrowed books:";   
           if(borrowedBooks.empty()){
         cout<<"None"<<endl;
         }else{
               for(auto &book:borrowedBooks){
                        cout<<book<<"";
                        
                        }
                        
                       cout<<endl;
              
              
              }
        }
         
         
   };                            
      
      
      
      
      
      
         
          
int main() {
    
   int numBooks;
   cout <<"Enter the number of books:";
   cinn>> numBooks;
   
   Library library;
   
   for  (int i=0; i < numBooks; 1++) {
        string title ,author;
        int year, serialNumber;
        float price
   
   
   
   cout <<"Enter details of the Book "<<1 +1 <<"i"<<endl;
   cout<< "Tittle:";
   cin.ignore();
   getline(cin,title);
   cout<<"Author":;
   getline(cin, author);
   cout<<"Year";
   cin>>year;
   cout<<"Price:";
   cin>>price;
   cout<<"SerialNumber:";
   cinn>>serialNumber;
   
   
  Book book(title,author,year,price,serialNumber);
  library.addBook(book); 
},

int main(){
    
    User user1("Bill");
    
   user1.borrowBook("*******");
   user1.borrow.Book("1984");
   user1.showBorrowedBooks();
   user1.returnBook("*****");
   
}

library.displayBooks();
library.searchBooks();
library.borrowBooks();
library.returnBooks();
   
   return 0;
   
   
   
   
         
          
          
          
          
