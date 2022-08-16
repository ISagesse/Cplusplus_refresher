#pragma once

#include <iostream>

using namespace std;

class Node {
	int data;
	Node* next_node;

public:
	Node(int new_data, Node* new_next_node = NULL) {
		data = new_data;
		next_node = new_next_node;
	}

	int get_data() {
		return data;
	}

	Node get_next_node() {
		if (this->next_node == NULL) {
			return NULL;
		}
		return *next_node;
	}

	void set_next_node(Node* node) {
		next_node = node;
	}
};

class Stack {
	Node* head = nullptr;
	int size = 0;
	int capacity = 1000;

public:
	Stack(int _capacity) {
		capacity = _capacity;
	}

	void peek() {
		if (isEmpty() == false) {
			cout << this->head->get_data() << endl;
			return;
		}
		cout << "The stack is empty\n";
	}

	void push(int new_data) {
		Node* new_node = new Node(new_data, nullptr);

		if (hasSpace() == true) {
			if (isEmpty() == true) {
				cout << "The stack was Empty adding " << new_data << " as the new head.\n";
				this->head = new_node;
				this->size += 1;
				return;
			}
			else {
				new_node->set_next_node(this->head);
				this->head = new_node;
				this->size += 1;
				cout << new_data << " will be the new head.\n";
				return;
			}
		}
		else
		{
			cout << "There are no space on this stack.\n";
		}

	}

	void pop() {
		if (isEmpty() == true) {
			cout << "This stack is empty.";
			return;
		}
		Node* cur_head = this->head;
		*this->head = cur_head->get_next_node();
		cout << "Removing " << cur_head->get_data() << " from the stack.\n";
	}

	bool isEmpty() {
		return size == 0;
	}

	bool hasSpace() {
		return size <= capacity;
	}
};
