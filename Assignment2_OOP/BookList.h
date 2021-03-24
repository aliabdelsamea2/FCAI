#ifndef ASSIGNMENT_2_BOOKLIST_H
#define ASSIGNMENT_2_BOOKLIST_H
#include "Book.h"
#include <iostream>
using namespace std;
class BookList
{
private:
    Book* books;
    int capacity;
    int booksCount;
public:
    BookList();
    void addBook(Book book);
    BookList(const BookList& anotherList);
    BookList(int capacity);
    Book* searchBook(string name);
    Book* searchBook(int id);
    void deleteBook(int id);
    //delete a book
    Book getTheHighestRatedBook();
    Book* getBooksForUser(User);
    // get all books of this author
    Book & operator [ ] (int position);
    friend ostream &operator<<( ostream &output, BookList &booklist );
    // to display all books
    ~BookList();
};

#endif //ASSIGNMENT_2_BOOKLIST_H
