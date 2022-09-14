#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int num;
        Node* next;

};

class linkedListDemo {
private:
        
    
public:
    Node *head, *tail;
    linkedListDemo() {
        head = NULL;
        tail = NULL;
    }

    void push(int num) {

        Node* temp = new Node();
        temp->num = num;
        temp->next = NULL;


        if (head == NULL) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }

    }

    
};

void printLinkedList(Node* head) {

    Node* itr = head;

    while (itr != NULL) {
        cout << itr->num << " -->";
        itr = itr->next;
    }

    cout << endl;
}




int main() {

    linkedListDemo l;

    l.push(2);
    l.push(3);
    l.push(5);




    printLinkedList(l.head);



    return 0;
}


