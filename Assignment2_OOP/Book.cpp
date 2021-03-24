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
    id = book.id;
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
void Book::rateBook(double rating)
{
    numRates++;
    sumRates+=rating;
    averageRating= sumRates/numRates;
}
double Book :: getAverageRating () const
{
    return averageRating;
}
// this function to set the Num Rate
void Book :: set_Num_Rate(int numRates)
{
    this->numRates = numRates;
}
// this function to set the Sum Rate
void Book :: set_Sum_Rate(double sumRates)
{
    this->sumRates= sumRates;
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
    output<<"==============Book "<<book.id<<" info=============="<<endl;
    output<<"Title: "<<book.title<<endl;
    output<<"ISBN: "<<book.isbn<<endl;
    output<<"Category: "<<book.category<<endl;
    output<<"Avg Rating: "<<book.averageRating<<endl;
    if (!book.author.getName().empty())
    {
        output<<"==============Author info=============="<<endl;
        book.author.Display();
    }
    output<<"========================================"<<endl;
    return output;
}
istream &operator>>( istream &input, Book &book )
{
    cout<<"Enter the book information in this order"<<endl;
    cout<<"Title ISBN Category(Space separated)"<<endl;
    input>>book.title>>book.isbn>>book.category;
    return input;
}