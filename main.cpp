#include "LinkedList.h"
#include <iostream>

using namespace std;

int main()
{
    LinkedList mylist;

    mylist.add("Armando");
    mylist.add("Bobo");
    mylist.add("Carlo");
    mylist.add("Drogo");
    mylist.add("Cyrano");
    mylist.add("Frodo");

    cout << "Output entire list" << endl;
    mylist.output();

    cout << "Output after removing Carlo" << endl;
    mylist.remove("Carlo");
    mylist.output();

    cout << "Output after removing Frodo" << endl;
    mylist.remove("Frodo");
    mylist.output();

    cout << "Output after removing Armando" << endl;
    mylist.remove("Armando");
    mylist.output();

    cout << "Running contains function to search for 'Cyrano' : " << endl;
    Node* result = mylist.contains("Cyrano");
    if (result == nullptr) {
        cout << "Search term was not found. " << endl;
    } else {
        cout << "Found at address : " << result << "->" << result->getName() << endl << endl;
    }

    cout << "Output after adding Austin to the end... " << endl;
    mylist.addTail("Austin");
    mylist.output();

  return 0;
}