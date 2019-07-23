#include "Node.h"
#include "StackQueue.h"
#include <iostream>
using namespace std;

void main() {
	// Initiate an Integer Stack
	Stack myStack = Stack();
	Queue myQueue = Queue();

	int inputInt;
	int choice = 99;
	do {
		cout << "\nMenu to manipulate integer stack and queue:\n";
		cout << "1: To push an integer on stack\n";
		cout << "2: To pop an integer from stack\n";
		cout << "3: To display stack info\n";
		cout << "11: To shift an integer on queue\n";
		cout << "12: To unshift an integer from queue\n";
		cout << "13: To display queue info\n";
		cout << "99: Finish entering\n";
		cout << "Please enter your choice (#): ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "\nEnter an integer to STACK: ";
			cin >> inputInt;
			myStack.PushToStack(inputInt);
			break;
		case 2:
			cout << "\nprevious Top Item = " << myStack.PopFromStack() << endl;
			break;
		case 3:
			myStack.DisplayStack();
			break;
		case 11:
			cout << "\nEnter an integer to QUEUE: ";
			cin >> inputInt;
			myQueue.PushToQueue(inputInt);
			break;
		case 12:
			cout << "\nprevious Left Item = " << myQueue.PopFromQueue() << endl;
			break;
		case 13:
			myQueue.DisplayQueue();
			break;

		}

	} while (choice != 99);

	cout << "Ending Program\n";
	system("pause");
}