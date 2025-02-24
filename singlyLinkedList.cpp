// singlyLinkedList.cpp
// sample code for Module 03
// dH, 2/13/15


#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
};

void insertEnd(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
    }
    else {
        Node* last = *head;
        while (last->next != nullptr) {
            last = last->next;
        }
        last->next = newNode;
    }
}

void displayList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

void deleteNode(Node** head, int position) {
    if (*head == nullptr) return;

    Node* temp = *head;

    if (position == 0) {
        *head = temp->next;
        delete temp;
        return;
    }

    for (int i = 0; temp != nullptr && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr) return;

    Node* next = temp->next->next;
    delete temp->next;
    temp->next = next;
}

int main() {
    cout << "\nWelcome to Linked Lists!\n";

    Node* head = nullptr;

    // Call the insertEnd() function and pass it the address of head and an int value for the data field.
    insertEnd(&head, 1);
    insertEnd(&head, 2);
    insertEnd(&head, 3);
    insertEnd(&head, 4);

    // Call the displayList() function and pass it the head of the list.
    displayList(head);

    // Delete the third node (position starts from 0)
    deleteNode(&head, 2);

    // Display the new list.
    cout << "\nList after deleting third node:\n";
    displayList(head);

    return 0;
}
