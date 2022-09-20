#include <bits/stdc++.h>
using namespace std;


class MyLinkedList
{
private:
    class Node
    {
    public:
        int num;
        Node *next;
    };
    Node *head, *tail;
    int length = 0;

public:
    MyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void addAtTail(int num)
    {

        Node *temp = new Node();
        temp->num = num;
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        length += 1;
    }

    void addAtHead(int num)
    {
        Node *temp = new Node();
        temp->num = num;
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
        length++;
    }

    void addAtIndex(int index, int val)
    {
        Node *temp = new Node();
        temp->num = val;

        if (index > length)
        {
            cout << "Out of bound";
            return;
        }

        Node *itr = head->next;
        Node *prev = head;

        if (index == 0)
        {
            addAtHead(val);
            return;
        }
        else if (index == length)
        {
            addAtTail(val);
            return;
        }

        for (int i = 1; i < length; i++)
        {

            if (i == index)
            {
                temp->next = itr;
                prev->next = temp;
                break;
            }
            prev = itr;
            itr = itr->next;
        }
        length++;
    }

    void deleteAtIndex(int index)
    {

        if (index >= length)
        {
            cout << "Out of bound" << endl;
            return;
        }

        if (index == 0)
        {
            head = head->next;
            length--;
            return;
        }

        Node *current = head->next;
        Node *prev = new Node();
        prev = head;

        for (int i = 1; i < length; i++)
        {

            if (i == index)
            {

                prev->next = current->next;
                length--;
                return;
            }
            prev = current;
            current = current->next;
        }
    }

    int get(int index)
    {

        if (index >= length)
        {

            return -1;
        }

        Node *itr = head;

        for (int i = 0; i < length; i++)
        {

            if (i == index)
            {
                return itr->num;
            }

            itr = itr->next;
        }
    }

    void print()
    {

        Node *itr = head;

        while (itr != NULL)
        {
            cout << itr->num << " -->";
            itr = itr->next;
        }

        cout << endl;
    }

    int getLength()
    {
        return length;
    }
};

int main()
{

    //     ["MyLinkedList","addAtHead","addAtHead","addAtHead","addAtIndex","deleteAtIndex","addAtHead","addAtTail","get","addAtHead","addAtIndex","addAtHead"]
    // [[],[7],[2],[1],[3,0],[2],[6],[4],[4],[4],[5,0],[6]]

    MyLinkedList myLinkedList;
    myLinkedList.addAtHead(7);
    myLinkedList.addAtHead(2);
    myLinkedList.addAtHead(1);

    myLinkedList.addAtIndex(3, 0); // linked list becomes 1->2->3
    myLinkedList.print();

    myLinkedList.deleteAtIndex(2);
    myLinkedList.print();
    myLinkedList.addAtHead(6);
    myLinkedList.print();

    myLinkedList.addAtTail(10);
    myLinkedList.addAtTail(10);

    myLinkedList.addAtTail(10);
    myLinkedList.addAtTail(10);

    // problem
    myLinkedList.addAtTail(4);
    myLinkedList.print();
    myLinkedList.get(4);
    myLinkedList.print();
    myLinkedList.addAtHead(4);
    myLinkedList.print();
    myLinkedList.addAtIndex(5, 0);
    myLinkedList.print();
    myLinkedList.addAtHead(6);
    myLinkedList.print();
    return 0;
}
