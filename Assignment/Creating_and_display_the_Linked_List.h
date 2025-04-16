#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL) cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    Node* head = new Node{7, NULL};
    head->next = new Node{9, NULL};
    head->next->next = new Node{11, NULL};
    head->next->next->next = new Node{20, NULL};
    head->next->next->next->next = new Node{50, NULL};
    head->next->next->next->next->next = new Node{60, NULL};
    cout << "Original Linked List: ";
    display(head);
    return 0;
}
