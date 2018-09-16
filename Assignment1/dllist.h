#ifndef DLLIST_H
#define DLLIST_H
#include "nodedl.h"


class DLlist
{
    public:
        int n;
        NodeDL* dummy;
        DLlist();
        NodeDL* getNode(int);
        int get(int);
        int set(int, int);
        void add(int, int);
        int remove(int);
        void swap(int);
        void reverse();

    private:
        void remove(NodeDL*);
        NodeDL* addBefore(NodeDL*, int);

};

#endif // DLLIST_H
