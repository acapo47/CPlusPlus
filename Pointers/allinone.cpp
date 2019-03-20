#ifndef LIST_H
#define LIST_H
#include <iostream>
using namespace std;

class List
{
    public:
        List();
        ~List();
        int sum();
        void insert(int value); // insert at beginning of list
        void insert_at_end(int value);
        void print();
    private:
        class Node
        {
            public:
                Node(int value, Node *next)
                {m_value = value; m_next = next;}
                int m_value;
                Node *m_next;
        };
        Node *m_head;
};

#endif

List::List()
{
    m_head = NULL;
}

List::~List()
{
    Node *ptr = m_head;
    while (ptr != NULL)
    {
        Node *temp;

        temp = ptr;
        ptr = ptr->m_next;
        delete temp;
    }
}

void List::insert(int value)
{
    m_head = new Node(value, m_head);
}


void List::print()
{
    Node *ptr = m_head;
    while (ptr != NULL)
    {
        cout << ptr->m_value << endl;
        ptr = ptr->m_next;
    }

}

int List::sum()
{
    int total = 0;
    Node *ptr = m_head;
    while(ptr != NULL)
    {
        total = total + ptr->m_value;
        ptr = ptr->m_next;
    }
    cout << "sum = " <<total<<endl;
    return total;

}

void List::insert_at_end(int value)
{
    Node *ptr = new Node(value, NULL);

    if(!m_head)
    {
        m_head = ptr;
        return;
    }
    else
    {
        Node *last = m_head;
        while(last->m_next)
        {
            last = last->m_next;
        }
        last->m_next = ptr;
    }

}


#include <iostream>
using namespace std;
#include "list.h"

int main()
{
    int number;
    List list;

    while(cin>>number)
    {
        list.insert_at_end(number);
        //list.insert(number);
    }

    list.print();
    list.sum();

    return 0;
}
