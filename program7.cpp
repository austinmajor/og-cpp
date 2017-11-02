/*
File Name: program7.cpp
Name: Austin Major
WSUID: N675Q967
HW#: 7
Description: Bubble, Bubble, Toil and Bubble Sort an Array of Strings
*/

#include <iostream>
#include <string>

using namespace std;

const int NUM_WORDS = 10;

void bubbleSort(string (&words)[NUM_WORDS], int num);

int main() {
	string words[NUM_WORDS];
	int counter = 0;

	while(counter < NUM_WORDS) {
		string temp;
		cout << "Enter a word: ";
		cin >> temp;

		if(temp == "0") break;
		else words[counter] = temp;

		counter++;
	}

	bubbleSort(words, counter);

	cout << "Your sorted list is: ";
	for(int i = 0; i < counter; i++) {
		cout << words[i] << " ";
	}
	cout << endl;

	return 0;
}

void bubbleSort(string (&words)[NUM_WORDS], int num) {
	bool finished = false;
	while(!finished) {
		finished = true;
		for(int i = 0; i < num-1; i++) {
			int cmp = words[i].compare(words[i+1]);

			if(cmp > 0) {
				string temp = words[i];
				words[i] = words[i + 1];
				words[i + 1] = temp;
				finished = false;
			}
			else {
				continue;
			}
		}
	}
}
