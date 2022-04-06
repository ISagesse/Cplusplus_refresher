#include <iostream>

using namespace std;
// a look at creating c style string in c++.
// and working with all the functions c++ provided to work with c style string

int main() {
	char cStyleString[] = "CStyleString";
	// \0 tells our program when we reach the end of the string we created.
	char cStyleString2[] = { 'c', 'p', 'p', '\0' };

	cout << cStyleString << endl;
	cout << cStyleString2 << endl;

	// strlen tells us how many characters are in a given strings
	cout << strlen(cStyleString) << endl;
	cout << strlen(cStyleString2) << endl;

	// strcmp compares two strings and returns 0 if they match.
	char str1[] = "CStyleString";
	cout << strcmp(cStyleString, str1) << endl;

	// strcpy_s copies a string from one array to another array.
	char str2[13];
	// it's important to note that str2 contain enough space to store the 12 character of CStyleString and a space for the
	// null terminator hints. the \0
	strcpy_s(str2, cStyleString);
	cout << str2 << endl;

	// strcat_s allows us to join or concatenate two strings.
	char str3[13];
	// it's important to note that str3 contain enough space to store the 12 character of CStyle + String and a space for the
	// null terminator hints. the \0
	strcpy_s(str3, "cStyle");
	char str4[] = "String";
	strcat_s(str3, str4);
	cout << str3 << endl;

	return 0;
}