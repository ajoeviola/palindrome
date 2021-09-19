#include "queue.h"

poi_queue::~poi_queue()
{
    Node* temp = head;
    while (temp) {
        //set head = to next node
        head = head->next;

        //delete previous head being pointed to by temp
        delete temp;

        //have temp point to next head
        temp = head;
    }
}

void poi_queue::Enqueue(char x)
{
    //allocate new node temp
    Node* temp = new Node;

    //set temp data to x and next to 0
    temp->data = x;
    temp->next = 0;

    //if queue is empty
    if (!head) {
        //set both tail and head pointing to temp
        head = tail = temp;
    }
    else {
        //enqueue the new customer to the tail of the queue
        tail->next = temp;
        tail = temp;
    }

}

void poi_queue::Dequeue(char& x)
{
    //if queue is empty 
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
    }
    else {

        //set customer x equal to the customer pointed at by the head
        x = head->data;

        //allocated new node and set it pointing to the head 
        Node* temp = head;

        //have head point to the next value after it 
        head = head->next;

        //delete the head being pointed to by temp
        delete temp;

        //if the queue is empty, reset the tail to 0
        if (!head) {
            tail = 0;
        }
    }
}

void poi_queue::Gethead(char& x)
{
    //if queue is empty 
    if (isEmpty()) {
        cout << "Empty Queue" << endl;
    }
    else {
        //set customer x = the data pointed at by head
        x = head->data;
    }
}

void poi_queue::Gettail(char& x)
{
    //if queue is empty 
    if (isEmpty()) {
        cout << "Empty Queue" << endl;
    }
    else {
        //set customer x = the data pointed at by head
        x = tail->data;
    }
}

bool poi_queue::isEmpty()
{
    return !head;
}

void poi_queue::print()
{
    Node* temp = head;

    while (temp) {
        //print customer name at head
        cout << temp->data << endl;

        //have head point to next head
        temp = temp->next;
    }

}