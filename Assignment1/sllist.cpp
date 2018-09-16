#include "sllist.h"
#include "nodesl.h"
#include <iostream>
using namespace std;

SLlist::SLlist()
{
    n = 0;
    head = nullptr;
    tail = nullptr;
}

int SLlist:: push(int val) {
    Node *u = new Node(val);
    u->next = head;
    head = u;
    if (n == 0){
        tail = u;
    }
    n++;
    return val;
}

int SLlist:: pop() {
    if (n == 0) return -1;
    int val = head->val;
    Node *u = head;
    head = head->next;
    delete u;
    if (--n == 0) {
        tail = nullptr;
    }
    return val;
}

bool SLlist:: add(int val) {
    Node *u = new Node(val);
    if (n == 0) {
    head = u;
    } else {
    tail->next = u;
    }
    tail = u;
    n++;
    return true;
}

Node* SLlist:: getNode(int index) {
    Node* a = head;
    for (int j = 0; j < index; j++){
       Node* b = a->next;
       a = b;
    }
    return a;
}

bool SLlist:: swap(int index) {

    Node *prev;
    Node *select;
    Node *next;
    Node *nextnext;
    if(index == 0){
        prev = head;
        next = head->next->next;
        head = head->next;
        head->next = prev;
        prev->next = next;
    }
    else {
        prev = getNode(index - 1);
        select = prev->next;
        next = select->next;
        nextnext = next->next;
        prev->next = next;
        prev->next->next = select;
        select->next = nextnext;
    }
    return true;
}
