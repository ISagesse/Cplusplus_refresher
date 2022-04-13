#include<iostream>

#include<vector>

using namespace std;

vector<int> smallerThank(int arr[], int n, int k) {
	// this function will return an array with numbers smaller than k value
	vector<int> v;

	for (int i = 0; i < n; i++) {
		if (arr[i] < k) {
			v.push_back(arr[i]);
		}
	}
	return v;
}

int main() {
	int my_arr[] = { 10, 20, 2, 4, 5, 7 };

	vector<int> v = smallerThank(my_arr, 6, 9);

	for (int x : v) {
		cout << x << " ";
	}

	return 0;
}