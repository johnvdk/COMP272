#include <iostream>
#include "nodesl.h"
#include "sllist.h"
#include "dllist.h"
#include "nodedl.h"


using namespace std;

int main()
{
    cout << "Single list is:" << endl;
    for (int ii = 0; ii < 4; ii++){
        SLlist test = SLlist();
        test.push(5);
        test.push(4);
        test.push(3);
        test.push(2);
        test.push(1);
        test.push(0);
        test.pop();
        test.swap(ii);
        Node* a = test.getNode(0);
        Node* b = test.getNode(1);
        Node* c = test.getNode(2);
        Node* d = test.getNode(3);
        Node* e = test.getNode(4);
        int i = a->val;
        int j = b->val;
        int k = c->val;
        int l = d->val;
        int m = e->val;

        cout << i << " " << j << " " << k << " " << l << " " << m << " " << endl;
    }

    cout << endl;
    cout << "Double list is:" << endl;
    for (int ii = 0; ii <= 4; ii++){
        DLlist test = DLlist();
        test.add(0, 4);
        test.add(0, 3);
        test.add(0, 2);
        test.add(0, 1);
        test.add(0, 0);
        test.swap(ii);
        NodeDL* a = test.getNode(0);
        NodeDL* b = test.getNode(1);
        NodeDL* c = test.getNode(2);
        NodeDL* d = test.getNode(3);
        NodeDL* e = test.getNode(4);
        int i = a->val;
        int j = b->val;
        int k = c->val;
        int l = d->val;
        int m = e->val;

        cout << i << " " << j << " " << k << " " << l << " " << m << " " << endl;
    }

    return 0;
}

void DLlist::reverse(){
    NodeDL* current= dummy->next;
    for(int i = 0; i <= n; i++){
        NodeDL* next = current->next;
        next->prev = current->prev;
        current->next = next->next;
        current = next;
    }
}
