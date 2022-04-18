#include "User.h"

using namespace std;

User::User() {

}
User::User(string User, string Pass, int id) {
    this->Username = User;
    this->Password = Pass;
    this->ID = id;
}

string User::GetUsername() {
    return this->Username;
}

string User::GetPassword() {
    return this->Password;
}

void User::addContact(int userID)
{
    Contacts.push_back(userID);
    cout << "Contact Added Successfully " << endl;
    
}

void User::displayContacts(int userID,User data[])
{
    User user = data[userID];

    if (user.Contacts.empty())
        cout << "Contact List is Empty !! " << endl;
    else {
        cout << "---------------------\n";
        cout << "You have " << user.Contacts.size() << " Contacts." << endl;
        for (int i = 0; i < user.Contacts.size(); i++)
        {
            
             cout << "Contact "<<i+1<< " ID : "<<data[user.Contacts.at(i)].GetUsername() << endl;
             
        }
    }
}

bool User::searchForContact(int userID)
{
    int counter = 0;
    bool flag = true;
    while (flag&&counter < this->Contacts.size())
    {
        
            if (this->Contacts.at(counter) == userID)
            {
                cout << "------------------------\n";
                cout << "Contact exists !!\n";
                cout << "Contact ID : "<<this->Contacts.at(counter) << endl;
                flag = false;
            }
            counter++;
        
    }
    if (flag)
    {
        cout << "Contact doesn't exists !!\n";
    }
    return !flag;
}

User::~User() {

    
}

