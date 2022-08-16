#pragma once
#include <vector>
#include <iostream>

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

	void set_data(int new_data) {
		data = new_data;
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

class LinkedList {
	Node* head_node;

public:
	LinkedList(Node* new_head = NULL) {
		head_node = new_head;
	}

	Node getHeadNode() {
		return *head_node;
	}

	int printHeadNode() {
		return this->head_node->get_data();
	}

	void addToHead(int data) {
		Node* new_node = new Node(data, NULL);

		if (this->head_node == NULL) {
			this->head_node = new_node;
		}
		else {
			new_node->set_next_node(this->head_node);
			this->head_node = new_node;
		}
	}
	//Append doens't work for now.
	void append(int data) {
		Node* new_node = new Node(data, NULL);

		if (this->head_node == NULL) {
			this->head_node = new_node;
			return;
		}
	
		Node last_node = getHeadNode().get_next_node();

		/*while ( last_node.get_data()){

			std::cout << last_node.get_data() << std::endl;

			if (!last_node.get_data()) {
				last_node.set_next_node(new_node);
				return;
			}
			else {
				last_node = last_node.get_next_node();
			}
		}*/

		last_node.set_next_node(new_node);

	}

	void readData()
	{
		Node currentHead = getHeadNode();

		while (currentHead.get_data()) {
			std::cout << currentHead.get_data() << std::endl;
			currentHead = currentHead.get_next_node();
		}
	}
};
