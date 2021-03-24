#include "User.h"
int User::count=0;
User::User()
{
    name="";
    id=0;
    password="";
    email="";
    count++;
    id=count;
}
User::User(string name, int age, string email, string password)
{
    this->name=name;
    this->email=email;
    this->password=password;
    this->age=age;
    count++;
    id=count;
}
User::User(const User&obj)
{
    name=obj.name;
    age=obj.age;
    password=obj.password;
    email=obj.email;
    id=obj.id;
}
bool User::operator==(const User& obj)
{
    if(name != obj.name || age != obj.age || id != obj.id || password != obj.password || email != obj.email)
    {
        return false;
    }
    return true;
}
void User::setName(string name)
{
    this->name=name;
}
string User::getName() const
{
    return name;
}
void User::setPassword(string password)
{
    this->password=password;
}
string User::getPassword() const
{
    return password;
}
void User::setEmail(string email)
{
    this->email=email;
}
string User::getEmail() const
{
    return email;
}
void User::setAge(int age)
{
    this->age=age;
}
int User::getAge() const
{
    return age;
}
void User::setId(int id)
{
    this->id=id;
}
int User::getId() const
{
    return id;
}
void User::Display() const
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Email: "<<email<<endl;
}
ostream &operator<<(ostream &output, const User &user )
{
    output<<"==============User "<<user.id<<" info=============="<<endl;
    output<<"Name: "<<user.name<<endl;
    output<<"Age: "<<user.age<<endl;
    output<<"Email: "<<user.email<<endl;
    output<<"========================================"<<endl;
    return output;
}
istream &operator>>( istream &input, User &user )
{
    cout<<"Enter the user information in this order"<<endl;
    cout<<"Name Age Email Password (Space separated)"<<endl;
    input>>user.name>>user.age>>user.email>>user.password;
    return input;
}