#pragma once
#include "Node.h"
#include <string>
using namespace std;

class LinkedList
{
  private:
        Node* head;             // Points to the first thing in the list
  public:
        LinkedList();
        ~LinkedList();
        void add(string s); // Adds to front of list
        void addTail(string s); // Adds to back of list
        void remove(string s); // Deletes first occurrence of s in the list
        void output();  // Output everything in the list
        Node* contains(string target); // Searches for occurrences and returns address
};