#include "User.h"
#include "Book.h"
int main()
{
    /*------------User part------------*/
    User u1;
    cout<<"Let's add user"<<endl;
    cin>>u1; cout<<u1;

    User u2;
    cout<<"Let's add another user"<<endl;
    cin>>u2; cout<<u2;
    /*------------Book part------------*/
    Book b1;
    cout<<"Let's add book"<<endl;
    cin>>b1; cout<<b1;

    Book b2;
    cout<<"Let's add another book"<<endl;
    cin>>b2; cout<<b2;
    /*-------------------------------------*/
    cout<<"Let's assign an author for the first book, set the first user as an auth"<<endl;
    cout<<"Let's rate the first book with 3 and 4 rating and print the book information"<<endl;
    b1.rateBook(3); b1.rateBook(4);
    cout<<b1; cout<<u1;
    cout<<"========================================"<<endl;
    cout<<"Let's add a new rating for b1 with 5 and print the book info"<<endl;
    b1.rateBook(5);
    cout<<b1; cout<<u1;
    /*----------------------------------------------------------------------------*/
    return 0;
}


