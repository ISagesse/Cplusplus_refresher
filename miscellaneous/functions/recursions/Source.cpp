#include <iostream>

using namespace std;

// C++ recursion
// sum numbers between m and n

int recursive_sum(int m, int n) {// calling (m=2,n=4)
	if (m == n)//wont stop the calling until m and n are not equal
		return m; // return m value
	return m + recursive_sum(m + 1, n);// 2+(2+1)(3+)retun (4) because n=4, answer 4 + 3 + 2 = 9
	// basicaly will add 1 to m value each time the functions call
	// the result will equal to all the m values added together
}

int main() {
	int m = 2, n = 4;

	// recursion example using a for loop
	/*int sum = 0;
	for (int i = m; i <= n; i++) {
		sum += i;
	}*/

	cout << "sum is equal to: " << recursive_sum(m, n) << endl;



	return 0;
}