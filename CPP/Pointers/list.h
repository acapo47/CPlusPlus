// demonstrate a simple linked-list of integers
#ifndef LIST_H
#define LIST_H

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
