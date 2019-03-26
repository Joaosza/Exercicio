#include <iostream>
#include <list>

using namespace std;

int main ()
{
	list<int> mylist;
	int myint;

	cout << "Please enter some integers (enter 0 to end):\n";

	do {
		cin >> myint;
		mylist.push_back(myint);
	} while (myint);

	cout << "mylist stores " << mylist.size() << " numbers.\n";

	return 0;
}
