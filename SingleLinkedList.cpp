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
    {
        start = NULL;
    }
    void addNode()
    {
        int nim;
        cout << "\nMasukkan nomor mahasiswa: ";
        cin >> nim;

        Node *nodebaru = new Node;
        nodebaru->noMhs = nim;

        if (start == NULL || nim <= start->noMhs)
        {
            if (start != NULL && nim == start->noMhs)
            {
                cout << "\nDuplikasi noMhs tidak diijinkan\n";
                return;
            }

            nodebaru->next = start;
            start = nodebaru;
            return;
        }

            Node *previous = start;
            Node *current = start;

            while (current != NULL && nim >= current->noMhs)
            {
                if (nim == current->noMhs)
                {
                    cout << "\nDuplikasi noMhs tidak diijinkan\n";
                    return;

                }
                    previous = current;
                    current = current->next;
            }

            nodebaru->next = current;
            previous->next = nodebaru;
    }