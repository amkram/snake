
class Node {
    int data;
    Node *next;
    Node *prev;
public:
    Node(int dataParam) : data(dataParam), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
    Node *head;
    Node *tail;
public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void addToTail();
};