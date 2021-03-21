#include "Book.h"
int Book::count;
Book::Book()
{
    title="";
    isbn="";
    id=0;
    averageRating=0.0;
    count++;
    id=count;
    numRates = 0 ;
    sumRates = 0 ;
    User author;
}
Book::Book(string title, string isbn, string category)
{
    this->title=title;
    this->isbn=isbn;
    this->category=category;
    count++;
    id=count;
    averageRating=0.0;
    numRates = 0 ;
    sumRates = 0 ;
    User author;
}
Book::Book(const Book& book)
{
    title=book.title;
    isbn=book.isbn;
    category=book.category;
    author=book.author;
    averageRating=book.averageRating;
}
void Book::setTitle(string title)
{
    this->title=title;
}
string Book::getTitle()
{
    return title;
}
void Book::setISBN(string isbn)
{
    this->isbn=isbn;
}
string Book::getISBN()
{
    this->isbn;
}
void Book::setId(int id)
{
    this->id=id;
}
int Book::getId()
{
    return id;
}
void Book::setCategory(string category)
{
    this->category=category;
}
string Book::getCategory()
{
    return category;
}
void Book::setAuthor(User user)
{
    author=user;
}
User Book::getAuthor()
{
    return author;
}
void Book::rateBook(int rating)
{
    numRates++;
    sumRates+=rating;
    averageRating= sumRates/numRates;
}
bool Book::operator==(const Book& book)
{
    if(title != book.title || isbn != book.isbn || id !=book.id || category != book.category)
    {
        return false;
    }
    return true;
}
ostream &operator<<(ostream &output, const Book &book )
{
    output<<"==============Book "<<book.id<<" info =============="<<endl;
    output<<"Title: "<<book.title;
    output<<"|ISBN: "<<book.isbn;
    output<<"|Category: "<<book.category;
    output<<"|Avg Rating: "<<book.averageRating<<endl;
    output<<"========================================\n"<<endl;
    return output;
}
istream &operator>>( istream &input, Book &book )
{
    cout<<"Enter the book information in this order"<<endl;
    cout<<"Title ISBN Category(Space separated)"<<endl;
    input>>book.title>>book.isbn>>book.category;
    return input;
}