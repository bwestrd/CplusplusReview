// IsPalindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

bool IsPalindrome(string testString) {
	int lengthOfTestString = (testString.length() - 1);
	if (testString.length() >=2) {
		if (testString.length() % 2 == 0) {// even
			for (int i = 0; i < (testString.length() / 2); i++) {
				if (testString[i] == testString[lengthOfTestString - i]) {
					//i probably should have made this if statement test if the string isn't a palindrome, but here we are.
					//compares the outer most characters in a string and moves in until all are compared. 
				}
				else {
					return false;
				}
			}
			return true;
		}
		else {
			for (int i = 0; i < (testString.length() / 2); i++) {
				if (testString[i] == testString[lengthOfTestString - i]) {

				}
				else {
					return false;
				}
			}
			return true;
		}
	}
	return true; //is 1 in length

}

int main(){
	string test = "";
	cout << "Enter word to test" << endl;
	cin >> test;
	if (IsPalindrome(test)) {
		cout << "Is Palindrome" << endl;
	}
	else {
		cout << "Is not Palindrome" << endl;
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
