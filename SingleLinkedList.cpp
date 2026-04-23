#include <iostream>
#include <string>
using namespace std;

class Node
{
    public:
    int noMhs;
    Node* next;
};

class linkedList
{
    Node *start;

    public:
    linkedList()