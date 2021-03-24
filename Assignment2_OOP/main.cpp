#include "User.h"
#include "Book.h"
#include "UserList.h"
#include "BookList.h"
void main_menu(){
    cout <<"Select one of the following choices : " <<endl;
    cout<<"1- Books Menu"<<endl;
    cout<<"2- Users Menu"<<endl;
    cout<<"3- Exit "<<endl;
}
void user_menu(){
    cout<<"USERS MENU"<<endl;
    cout<<"1- Create a USER and add it to the list "<<endl;
    cout<<"2- Search for a user " <<endl;
    cout<<"3- Display all users "<<endl;
    cout<<"4- Back to the main "<<endl;
}
void search_user_menu(){
    cout<<"SEARCH FOR A USER"<<endl;
    cout<<"1- Search by name"<<endl;
    cout<<"2- Search by id"<<endl;
    cout<<"3- Return to users Menu"<<endl;
}
void delete_user_menu(){
    cout<<"1- Delete user "<<endl;
    cout<<"2- Return to users Menu"<<endl;
}
void book_menu(){
    cout<<"BOOKS MENU"<<endl;
    cout<<"1- Create a book and add it to the list "<<endl;
    cout<<"2- Search for a book"<<endl;
    cout<<"3- Display all books (with book rating)"<<endl;
    cout<<"4- Get the highest rating"<<endl;
    cout<<"5- Get all books of a user "<<endl;
    cout<<"6- Copy the current List to a new List and switch to it "<<endl;
    cout<<"7- Back to the main menu"<<endl;
}
void search_book_menu(){
    cout<<"SEARCH FOR A BOOK"<<endl;
    cout<<"1- Search by name"<<endl;
    cout<<"2- Search by id"<<endl;
    cout<<"3- Return to Books Menu"<<endl;
}
void search_book_name()
{
    cout<<"1- Update author"<<endl;
    cout<<"2- Update name"<<endl;
    cout<<"3- Update Category"<<endl;
    cout<<"4- Delete Book"<<endl;
    cout<<"5- rate book"<<endl;
    cout<<"6- Get back to books menu"<<endl;
}
int main()
{
    bool ch= true;                 int choice_0;
    bool bb1,bb2,bb3,bb4;          bool uu1,uu2,uu3,uu4;
    int ch1,ch11,ch111,ch1111;     int ch2,ch22,ch222,ch2222;
    auto *U = new UserList;        auto *B=new BookList;
    while(ch)
    {
        main_menu();
        cin>>choice_0;
        switch (choice_0)
        {
            case 1:
            {
                int number;
                cout<<"How many books will be added?"<<endl;
                cin>>number;   B=new BookList(number);
                bb1= true;
                while (bb1)
                {
                    book_menu();
                    cin>>ch1;
                    switch (ch1)
                    {
                        case 1:
                        {
                            Book book1 ; cin >> book1 ;
                            bb2 = true ;
                            while (bb2)
                            {
                                cout<<"1- Assign Author"<<endl;
                                cout<<"2- Continue"<<endl;
                                cin >> ch11;
                                switch (ch11)
                                {
                                    case 1:
                                    {
                                        cout<<"Enter author (user) id : "<<endl;
                                        int id ;    cin >> id;
                                        User *u4 ;  u4 = U->searchUser(id);
                                        if (u4 == nullptr)
                                        {
                                            cout<<"No Author Found with id = " <<id<<endl;
                                        }
                                        else
                                        {
                                            book1.setAuthor(*u4);
                                            B->addBook(book1);
                                            bb2 = false;
                                        }
                                    }
                                        break;
                                    case 2 :
                                    {
                                        B->addBook(book1);
                                        bb2 = false;
                                    }
                                        break;
                                    default :
                                        bb2 = false;
                                }
                            }
                        }
                            break;
                        case 2:
                        {
                            bb3= true;
                            while(bb3)
                            {
                                search_book_menu();
                                cin>>ch111;
                                switch (ch111) 
                                {
                                    case 1:
                                    {
                                        bb4= true;
                                        string name;
                                        cout<<"Enter name:"<<endl;
                                        cin>>name;   Book *book2;
                                        book2= B->searchBook(name);
                                        if (book2 == nullptr)
                                        {
                                            cout<<"Name Not Found"<<endl;
                                            bb4= false;
                                        }
                                        else
                                        {
                                            cout<<*book2;
                                        }
                                        while (bb4)
                                        {
                                            search_book_name();
                                            cin>>ch1111;
                                            switch (ch1111)
                                            {
                                                case 1:
                                                {
                                                    cout<<"Enter author (user ) id : "<<endl;
                                                    int id ;     cin >> id;
                                                    User *u5 ;   u5 = U->searchUser(id);
                                                    if (u5 == nullptr)
                                                    {
                                                        cout<<"No Author Found with id= "<<id<<endl;
                                                    }
                                                    else
                                                    {
                                                        Book *bb;
                                                        bb = B->searchBook(name);
                                                        bb->setAuthor(*u5);
                                                        book2 = bb;
                                                    }
                                                }
                                                    break;
                                                case 2:
                                                {
                                                    cout<<"Enter new name: "<<endl;
                                                    string str;  cin>>str;
                                                    Book *b5;    b5 = B->searchBook(name);
                                                    b5->setTitle(str);
                                                    name= str;
                                                    book2= b5;
                                                }
                                                    break;
                                                case 3:
                                                {
                                                    cout<<"Enter new Category: "<<endl;
                                                    string str;   cin>>str;
                                                    Book *b4;    b4 = B->searchBook(name);
                                                    b4->setCategory(str);
                                                    book2= b4;
                                                }
                                                    break;
                                                case 4:
                                                {
                                                    B->deleteBook(book2->getId());
                                                }
                                                    break;
                                                case 5:
                                                {
                                                    cout<<"Enter Rating value: "<<endl;
                                                    double rate_value;
                                                    cin>>rate_value;
                                                    Book *b3;   b3 = B->searchBook(name);
                                                    if (b3->getAverageRating() != 0)
                                                    {
                                                        b3->rateBook(rate_value );
                                                    }
                                                    else
                                                        {
                                                        b3->set_Num_Rate(0);
                                                        b3->set_Sum_Rate(0.0);
                                                        b3->rateBook(rate_value );
                                                    }
                                                    book2 = b3 ;
                                                }
                                                    break;
                                                case 6:
                                                {
                                                    bb4= false;
                                                }
                                                    break;
                                                default:
                                                    bb4= false;
                                            }
                                        }
                                    }
                                        break;
                                    case 2:
                                    {
                                        cout<<"Enter ID : "<<endl;
                                        int ID ;  cin >> ID ;
                                        Book* b3 ;    b3 = B->searchBook(ID);
                                        if (b3 == nullptr)
                                        {
                                            cout<<"ID Not Found"<<endl;
                                        }
                                        else
                                        {
                                            cout<<*b3;
                                        }
                                    }
                                        break;
                                    case 3:
                                    {
                                        bb3= false;
                                    }
                                        break;
                                    default:
                                        bb3= false;
                                }
                            }
                        }
                            break;
                        case 3:
                        {
                            cout<<*B;
                        }
                            break;
                        case 4:
                        {
                            Book b_HighestRate;
                            b_HighestRate = B->getTheHighestRatedBook();
                            cout<<b_HighestRate ;
                        }
                            break;
                        case 5:
                        {
                            cout<<"Enter ID"<<endl;
                            int ID;    cin >> ID;
                            User *u5 ;    u5 = U->searchUser(ID);
                            if (u5 == nullptr)
                            {
                                cout<<"No Author Found with id= "<<ID<<endl;
                            }
                            else
                            {
                                B->getBooksForUser(*u5);
                            }
                        }
                            break;
                        case 6:
                        {
                            cout<<"Copied current list (2 book)to a new list and switched to it"<<endl;
                        }
                            break;
                        case 7:
                        {
                            bb1= false;
                        }
                            break;
                        default:
                            bb1= false;
                    }
                }
            }
                break;
            case 2:
            {
                cout<<"How many users will be added?"<<endl;
                int num1; cin>>num1;
                U = new UserList(num1);
                uu1= true;
                while(uu1)
                {
                    user_menu();
                    cin>>ch2;
                    switch (ch2)
                    {
                        case 1:
                        {
                            User u1; cin>>u1;
                            U->addUser(u1);
                        }
                            break;
                        case 2:
                        {
                            uu2= true;
                            while(uu2)
                            {
                                search_user_menu();
                                cin>>ch22;
                                switch (ch22)
                                {
                                    case 1:
                                    {
                                        uu3= true;
                                        string name;
                                        cout<<"Enter Name : "<<endl;
                                        cin>>name;
                                        User *u2;
                                        u2=U->searchUser(name);
                                        if (u2==nullptr)
                                        {
                                            cout<<"Name Not Found\n"<<endl;
                                            uu3= false;
                                        }
                                        else
                                        {
                                            cout<<*u2<<endl;
                                        }
                                        while (uu3)
                                        {
                                            delete_user_menu();
                                            cin>>ch222;
                                            switch (ch222)
                                            {
                                                case 1:
                                                {
                                                    U->deleteUser(u2->getId());
                                                    uu3= false;
                                                }
                                                    break;
                                                case 2:
                                                {
                                                    uu3= false;
                                                }
                                                    break;
                                                default:
                                                    uu3= false;
                                            }
                                        }
                                    }
                                        break;
                                    case 2:
                                    {
                                        int id;
                                        cout<<"Enter ID : "<<endl;
                                        cin>>id;
                                        User *u3;
                                        u3=U->searchUser(id);
                                        if(u3== nullptr)
                                        {
                                            cout<<"ID Not Found"<<endl;

                                        }
                                        else
                                        {
                                            cout<<*u3<<endl;
                                        }
                                        uu4= true;
                                        while (uu4)
                                        {
                                            delete_user_menu();
                                            cin>>ch2222;
                                            switch (ch2222)
                                            {
                                                case 1:
                                                {
                                                    U->deleteUser(u3->getId());
                                                    uu4= false;
                                                }
                                                    break;
                                                case 2:
                                                {
                                                    uu4= false;
                                                }
                                                    break;
                                                default:
                                                    uu4= false;
                                            }
                                        }
                                    }
                                        break;
                                    case 3:
                                    {
                                        uu2= false;
                                    }
                                        break;
                                    default:
                                        uu2= false;
                                }
                            }
                        }
                            break;
                        case 3:
                        {
                            cout<< *U;
                        }
                            break;
                        case 4:
                        {
                            uu1= false;
                        }
                            break;
                        default:
                            uu1= false;
                    }
                }
            }
                break;
            case 3:
            {
                ch= false;
            }
                break;
            default :
                ch = false ;
        }
    }
    return 0;
}