#include <iostream>

using namespace std;

int main(){
	int specialNum = 17;
	int attempt = 0;
	int tries = 10;
	int guess;

	do{
		if(attempt == 0){
			cout << "Guess the number: ";
		}else{
			cout << "Wrong! " << (tries - attempt) << " guesses left!\nGuess again: ";
		}

		cin >> guess;
		attempt++;
	}while(guess != specialNum && attempt < tries);

	if(guess == specialNum){
		cout << endl << "Well done! You guessed the correct number (" << specialNum << ") after " << attempt << " attempts!";
	}else{
		cout << endl << "No more attempts left! The answer was " << specialNum;
	}

	return 0;
}