#include "header.h"

int main3()
{
	cout << "Please enter your First Name (followed by enter):" << endl;
	string first_name;
	cin >> first_name;
	cout << "Hello, " << first_name << endl;


	return 0;
}

int main31()
{
	string previous = " ";
	string current;
	while (cin >> current){
		if (previous == current)
			cout << "repeated word " << current << endl;
	previous = current;
		}

	return 0;
}

int main32()
{
	int number_of_words = 0;
	string previous1 = " ";
	string current1;
	while (cin >> current1) {
		++number_of_words;
		if (previous1 == current1)
			cout << "Word number " << number_of_words << " repeated " << current1 << endl;
		previous1 = current1;
	}

	return 0;
}


