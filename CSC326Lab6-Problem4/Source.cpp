#include <iostream>
#include "queue.h"
#include "stack.h"
using namespace std;



int main() {
	string palindrome;
	Stack s;
	poi_queue q;
	char stacktemp, queuetemp;
	bool success, palindromebool;
	cout << "Input a string:";
	cin >> palindrome;

	palindromebool = true;

	for (int i = 0; i < palindrome.length(); i++) {
		//push the ith character of the string unto the stack
		s.push(palindrome[i]);

		//enqueue the ith character of the string unto the queue
		q.Enqueue(palindrome[i]);

		//get the top of the stack, save it in stacktemp
		s.Gettop(stacktemp, success);

		//get the tail of the stack, save it in queuetemp
		q.Gethead(queuetemp);

	}

	for (int i = 0; i < palindrome.length(); i++) {
		s.pop(stacktemp, success);
		q.Dequeue(queuetemp);

		if (stacktemp != queuetemp) {
			cout << "the string is not a palindrome";
			palindromebool = false;
			break;
		}
	}

	if (palindromebool) {
		cout << "the string is a palindrome";
	}

}