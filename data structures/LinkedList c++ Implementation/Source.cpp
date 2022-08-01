#include <iostream>

using namespace std;

class Node {
	int value;
	Node* next;

public:
	Node(int new_value, Node* next_node = NULL) {
		value = new_value;
		next = next_node;
	}

	void setNext(Node* next_node) {
		this->next = next_node;
	}

	void getValue() {
		cout << value << endl;
	}

	Node getNext() {
		return *this->next;
	}
};


int main() {

	Node head(1);
	Node second(2);
	Node third(3);

	head.getValue();
	second.getValue();
	third.getValue();

	head.setNext(&second);
	second.setNext(&third);

	cout << "\n\nGetting the next nodes values.\n\n";

	head.getNext().getValue();

	return 0;
}