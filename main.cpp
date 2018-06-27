#include <iostream>
#include "list.h"

int main()
{
    list l;
    l.AddNode(5);
    l.AddNode(3);
    l.AddNode(88);
    l.AddNode(33);
    l.AddNode(22);
    l.PrintList();
    l.DeleteNode(24);
    l.DeleteNode(88);
    l.PrintList();


    return 0;
}
