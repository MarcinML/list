#include "list.h"
#include <iostream>

using namespace std;

list::list()
{
    head=NULL;
    curr=NULL;
    temp=NULL;
}

void list::AddNode(int addData)
{
    nodePtr n = new node;
    n->next = NULL;
    n->data = addData;

    if(head != NULL)
    {
        curr = head;
        while(curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = n;
    }
    else
    {
        head = n;
    }
}

void list::DeleteNode(int delData)
{
    nodePtr delPtr = NULL;
    temp = head;
    curr = head;
    while(curr != NULL && curr->data != delData)
    {
        temp = curr;
        curr = curr->next;
    }
    if(curr == NULL)
    {
        cout<< delData << " was not in the list"<<endl;
        delete delPtr;
    }
    else
    {
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        delete delPtr;
        cout << "the value " <<delData<<" was deleted"<<endl;

    }

}

void list::PrintList()
{
    curr = head;
    while(curr != NULL)
    {
        cout<< curr->data<<endl;
        curr = curr->next;
    }
}

