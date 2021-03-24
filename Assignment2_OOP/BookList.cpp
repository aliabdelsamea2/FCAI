#include "BookList.h"
BookList::BookList()
{
    capacity=0;
    booksCount=0;
    books=new Book[booksCount];
}
void BookList::addBook(Book book)
{
    books[booksCount]= book;
    books[booksCount].setId(booksCount+1);
    booksCount++;
}
BookList::BookList(const BookList& anotherList)
{
    capacity=anotherList.capacity;
    booksCount=anotherList.booksCount;
    for(int i=0;i<booksCount;i++)
    {
        books[i]=anotherList.books[i];
    }
}
BookList::BookList(int capacity)
{
    this->capacity=capacity;
    books = new Book[capacity];
    booksCount = 0;
}
Book* BookList::searchBook(string name)
{
    for (int i = 0 ; i < booksCount;i++)
    {
        if (books[i].getTitle()== name)
        {
            return &books[i];
        }
    }
    return nullptr;
}
Book* BookList::searchBook(int id)
{
    for (int i = 0 ; i <booksCount; i++)
    {
        if ((books[i]).getId()== id )
        {
            return &books[i];
        }
    }
    return nullptr;
}
void BookList::deleteBook(int id)
{
    for (int i = 0 ; i < booksCount; i++)
    {
        if ((books[i]).getId() == id)
        {
            while (i < booksCount - 1)
            {
                books[i] = books[i + 1];
                books[i].setId(i + 1);
                i++;
            }
            booksCount--;
            capacity--;
            break;
        }
    }
}
Book BookList::getTheHighestRatedBook()
{
    double Highest_Rate = 0.0 ;
    int index =  0 ;
    for (int i = 0 ; i < booksCount ; i++)
    {
        if (books[i].getAverageRating()> Highest_Rate)
        {
            Highest_Rate = books[i].getAverageRating();
            index = i ;
        }
    }
    return books[index];
}
Book* BookList::getBooksForUser(User user)
{
    for (int i = 0 ; i < booksCount ; i++)
    {
        if (books[i].getAuthor()== user)
        {
            cout<<books[i];
        }
    }
    return nullptr;
}
Book & BookList::operator [] (int position)
{
    if(position<0 || position >= booksCount)
    {
        cout<<"Position Error";
        exit (0);
    }
    return books[position];
}
ostream &operator<<( ostream &output, BookList &bookList )
{
    for (int i = 0 ; i < bookList.booksCount ; i++)
    {
        output << bookList.books[i];
    }
    return output;
}
BookList::~BookList()
{
    delete [] books;
}