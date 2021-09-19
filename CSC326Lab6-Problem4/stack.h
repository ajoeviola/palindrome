#ifndef STACK_
#define STACK_
#include <iostream>
using namespace std;

class Stack {
private:
	int top;
	char arr[100];
public:
	Stack() { top = -1; };
	void push(char x);
	void pop(char& x, bool& success);
	void Gettop(char& x, bool& success);
	void print();
};


























#endif