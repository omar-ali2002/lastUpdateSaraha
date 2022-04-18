#include "User.h"

using namespace std;

int main() {
	
	User arr[120];
	

	arr[1]=User("osama", "123", 1);
	arr[2]= User("eslam", "123", 2);
	arr[3] = User("omar","123",3);


	arr[1].addContact(2);
	arr[1].addContact(3);

	arr[0].displayContacts(1,arr);
	
	arr[1].searchForContact(3);


	

	
}