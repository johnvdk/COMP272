#include "dllist.h"
#include "nodedl.h"

DLlist::DLlist()
{
    n = 0;
    dummy->next = dummy;
    dummy->prev = dummy;
}

NodeDL* DLlist::getNode(int index){
    NodeDL* p;

    if (index < n / 2) {
        p = dummy->next;
        for (int j = 0; j < index; j++)
            p = p->next;
    }

    else {
        p = dummy;
        for (int j = n; j > index; j--)
            p = p->prev;
    }
    return (p);
}

int DLlist::get(int index){
    return getNode(index)->val;
}

int DLlist::set(int index, int val){
    NodeDL* u = getNode(index);
    int y = u->val;
    u->val = val;
    return y;
}

void DLlist::add(int index, int val) {
    addBefore(getNode(index), val);
}

int DLlist::remove(int index) {
    NodeDL *w = getNode(index);
    int x = w->val;
    remove(w);
    return x;

}

void DLlist::remove(NodeDL *w){
    w->prev->next = w->next;
    w->next->prev = w->prev;
    delete w;
    n--;
}

NodeDL* DLlist::addBefore(NodeDL *w, int val){
    NodeDL *u = new NodeDL(val);
    u->prev = w->prev;
    u->next = w->prev;
    u->next = w;
    u->next->prev = u;
    u->prev->next = u;
    n++;
    return u;
}

void DLlist::swap(int index){
    NodeDL *select = getNode(index);
    NodeDL *previous = select->prev;
    NodeDL *next = select->next;
    previous->prev->next = select;
    select->prev = previous->prev;
    previous->prev = select;
    previous->next = next;
    select->next = previous;
    next->prev = previous;
}


