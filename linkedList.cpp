#include <iostream>

struct Node {
    int value;
    Node* next;
    Node(int val) : value(val), next(nullptr) {}
};

int main() {
    Node* head = nullptr;

    int values[] = {15, 25, 10, 20, 30, 40}; 
    Node* current = nullptr;

    for (int i = 0; i < 6; i++) {
        Node* newNode = new Node(values[i]); 
        if (!head) {
            head = newNode;  
        } else {
            current->next = newNode; 
        }
        current = newNode; 
    }

    Node* temp = head;
    std::cout << "List: ";
    while (temp) {
        std::cout << temp->value << " -> ";
        temp = temp->next;
    }
    std::cout << "NULL\n";

    Node* prev = nullptr;
    current = head;
    while (current && current->value != 25) {
        prev = current;
        current = current->next;
    }
    if (current) {
        if (prev) {
            prev->next = current->next;  
        } else {
            head = current->next; 
        }
        delete current;
    }

    temp = head;
    std::cout << "After deleting 25: ";
    while (temp) {
        std::cout << temp->value << " -> ";
        temp = temp->next;
    }
    std::cout << "NULL\n";

    return 0;
}
