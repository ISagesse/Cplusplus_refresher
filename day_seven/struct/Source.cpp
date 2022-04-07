#include <iostream>
using namespace std;

// learning all about structure in c++

struct Point
{
	int x;
	int y;
};

int main() {
	struct Point p;
	p.x = 20;
	p.y = 5;

	cout << p.x << " " << p.y << endl;
	cout << p.y + p.x << endl;

	return 0;
}