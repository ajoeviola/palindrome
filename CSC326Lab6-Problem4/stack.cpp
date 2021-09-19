#include "stack.h"

void Stack::push(char x)
{
	arr[top + 1] = x;
	top++;
}

void Stack::pop(char& x, bool& success)
{
	if (top > -1) {
		x = arr[top];
		arr[top] = NULL;
		top--;
		success = true;
	}
	else { success = false; }
}

void Stack::Gettop(char& x, bool& success)
{
	if (top > -1) {
		x = arr[top];
		success = true;
	}
	else { success = false; }


}

void Stack::print()
{
	/*for (int i = 0; i < top; i++) {
		cout << arr[i+1] << endl;
	}*/
	char x;
	bool success;

	Gettop(x, success);
	cout << x;
}
