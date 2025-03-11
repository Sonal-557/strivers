#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    
    Node(int val) {  // Constructor
        data = val;
        next = nullptr;
    }
};

// Function to convert array to linked list
Node* arrayToLinkedList(int arr[], int n) {
    if (n == 0) return nullptr;
    
    Node* head = new Node(arr[0]);  // First node
    Node* current = head;

    for (int i = 1; i < n; i++) {
        current->next = new Node(arr[i]);  // Create and link new node
        current = current->next;  // Move current pointer
    }

    return head;
}

// Function to print linked list
void printLinkedList(Node* head) {
    Node* current = head;
    while (current) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

// Example usage
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node* linkedList = arrayToLinkedList(arr, n);
    printLinkedList(linkedList);

    return 0;
}

