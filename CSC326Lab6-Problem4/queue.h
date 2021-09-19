#ifndef QUEUE_
#define QUEUE_
#include <iostream>
using namespace std;



struct poi_queue {
public:
	poi_queue() { head = 0; tail = 0; };
	~poi_queue();
	void Enqueue(char);
	void Dequeue(char& x);
	void Gethead(char& x);
	bool isEmpty();
	void print();
	void Gettail(char& x);
private:
	struct Node {
		char data;
		Node* next;
	};
	Node* head, * tail;
};

























#endif