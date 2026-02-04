#include <iostream>
using namespace std;

int main(){
	const int secretTarget = 42;
	int guess = 0;
	int attempts = 0;
	
	while (guess != secretTarget) {
		cout <<"Enter your guess: ";
		cin >> guess;
		attempts++;
		
		if (guess > secretTarget) {
			cout <<"Too High!" << endl;
		} else if (guess < secretTarget) {
			cout <<"Too Low!" << endl;
		} else {
			cout <<"Correct!" << endl;
		}
		}
		
		cout <<"You win in " <<attempts <<" attempts." << endl;
		
		return 0;
	} 

