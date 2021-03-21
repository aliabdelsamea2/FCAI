#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED
#include<iostream>
#include "User.h"
using namespace std;
class Book
{
private:
    string title;
    string isbn;
    int id;
    // Make sure that the id is incremental. First id is 1, second is 2 and so on
    string category;
    // this variable should contain the average rating for the book, rateBook function
    // should update this attribute with the new average rating for the book
    double averageRating;
    int numRates = 0 ;
    double sumRates = 0 ;
    User author;
public:
    static int count;
    Book();
    Book(string title, string isbn, string category);
    Book(const Book& book);
    void setTitle(string title);
    string getTitle();
    void setISBN(string isbn);
    string getISBN();
    void setId(int id);
    int getId();
    void setCategory(string category);
    string getCategory();
    void setAuthor(User user);
    User getAuthor();
    // this function should update averageRating attribute as a new rating is
    // introduced to the book so the average rating should be affected.
    // Check the main screenshot to know more information
    void rateBook(int rating);
    bool operator==(const Book& book);
    friend ostream &operator<<(ostream &output, const Book &book );
    friend istream &operator>>( istream &input, Book &book );
};
#endif // BOOK_H_INCLUDED
