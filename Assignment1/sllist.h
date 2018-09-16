#include "nodesl.h"
#ifndef SLLIST_H
#define SLLIST_H


class SLlist
{
    public:
        Node *head;
        Node *tail;
        int n;
        SLlist();
        int push(int);
        int pop();
        bool add(int);
        Node* getNode(int);
        bool swap(int);
};

#endif // SLLIST_H
