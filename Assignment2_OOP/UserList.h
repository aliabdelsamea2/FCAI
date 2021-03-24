#ifndef ASSIGNMENT_2_USERLIST_H
#define ASSIGNMENT_2_USERLIST_H
#include<iostream>
#include "User.h"
using namespace std;
class UserList
{
private:
    User* users;
    int capacity;
    int usersCount;
public:
    UserList();
    UserList(int capacity);
    void addUser(User user);
    // at the end of the array.
    User* searchUser(string name);
    User* searchUser(int id);
    void deleteUser(int id);
    friend ostream &operator<<( ostream &output, UserList &userList );
    //to display all books
    ~UserList();
};
#endif //ASSIGNMENT_2_USERLIST_H
