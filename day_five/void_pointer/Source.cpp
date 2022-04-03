#include <iostream>

// a look of void pointers

using namespace std;

void numberPtr(int* number) {
	cout << *number << endl;
}

void letterPtr(char* letter) {
	cout << *letter << endl;
}

//void poiters A void pointer is a pointer that has no associated data type with it. 
//A void pointer can hold address of any type and can be typcasted to any type.
void print(void* ptr, char type) {
	switch(type){
	case 'i': // handle int* pointer
		cout << *((int*)ptr) << endl;
		break;
	case 'c': // handle char* pointer
		cout << *((char*)ptr) << endl;
		break;
	default:
		break;
	}
}

int main() {
	int number = 5;
	char letter = 'a';
	//numberPtr(&number);
	//letterPtr(&letter);
	print(&number, 'i');
	print(&letter, 'c');

	return 0;
}