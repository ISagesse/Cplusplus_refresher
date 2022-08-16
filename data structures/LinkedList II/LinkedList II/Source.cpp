#include <iostream>
#include "List.h"

using namespace std;


int main()
{
	LinkedList ll;
	/*ll.addToHead(1);
	ll.addToHead(2);
	ll.addToHead(3);
	ll.addToHead(4);
	ll.addToHead(5);
	ll.addToHead(6);
	ll.addToHead(7);*/

	ll.append(1);
	ll.append(2);
	ll.append(3);
	ll.append(4);

	cout << "\nPrinting the head Node.\n";
	cout << ll.printHeadNode() << endl;

	cout << "\nprinting data \n";

	ll.readData();

	return 0;
}