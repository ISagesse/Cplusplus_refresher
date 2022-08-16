#include <iostream>
#include "Stack.h"

using namespace std;


int main() {

	Stack st{ 10 };

	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);

	st.peek();
	st.pop();
	st.peek();
	st.pop();
	st.peek();
	st.pop();
	st.peek();
	st.pop();
	st.peek();

	return 0;
}