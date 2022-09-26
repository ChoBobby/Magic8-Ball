#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int question;
	int randNum;

	cout << "Ask a yes or no question: ";
		cin >> question;
	cout << endl << "Magic 8-Ball says: ";

	srand(time(0));
	randNum = rand() % 6;

	if (randNum == 0) {
		cout << "Most definitely.";
	}
	else if (randNum == 1) {
		cout << "Signs point to yes.";
	}
	else if (randNum == 2) {
		cout << "Better not tell you now.";
	}
	else if (randNum == 3) {
		cout << "Cannot predict now.";
	}
	else if (randNum == 4) {
		cout << "My sources say no.";
	}
	else if (randNum == 5) {
		cout << "Very doubtful.";
	}
	else {
		cout << "Error.";
	}

	cout << endl;

	return 0;
}