#include "Node.h"
#include "StackQueue.h"
#include <iostream>
using namespace std;

void main() {
	// Initiate an Integer Stack
	Stack myStack = Stack();
	Queue myQueue = Queue();

	int inputInt; //Collect input
	int choice = 99; //Break out of loop
	do {
		//Menu(UI)
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
		case 1: //Entering input into the Stack
			cout << "\nEnter an integer to STACK: ";
			cin >> inputInt;
			myStack.PushToStack(inputInt);
			break;
		case 2: //Removing input from the Stack
			cout << "\nprevious Top Item = " << myStack.PopFromStack() << endl;
			break;
		case 3: //Displaying the Stack
			myStack.DisplayStack();
			break;
		case 11: //Entering input into the Queue
			cout << "\nEnter an integer to QUEUE: ";
			cin >> inputInt;
			myQueue.PushToQueue(inputInt);
			break;
		case 12: //Removing input from the Queue
			cout << "\nprevious Left Item = " << myQueue.PopFromQueue() << endl;
			break;
		case 13: //Displaying the Queue
			myQueue.DisplayQueue();
			break;

		}

	} while (choice != 99);

	cout << "Ending Program\n";
	system("pause");
}