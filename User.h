#include "Message.h"
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
using namespace std;


class User {
private:
    int ID;
    string Username;
    string Password;
    vector<int> Contacts;
    queue<Message> FavMsgs;
    vector<Message> RecMessages;
    stack<pair<int, Message>> SentMessages;

public:
    User();
    User(string User, string Pass, int id);
    string GetUsername();
    string GetPassword();
    void addContact(int userID);
    void displayContacts(int userID, User data[]);
    bool searchForContact(int userID);
    ~User();
};





