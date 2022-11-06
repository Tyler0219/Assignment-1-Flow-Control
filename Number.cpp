#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	//This creates a random number from 1 to 50 for the player to guess.
	int num, guess, tries = 0;
	srand(time(0));
	num = rand() % 50 + 1;

	//Title
	cout << "Welcome To A C++ Number Guessing Game!\n";
	cout << "The Number Will Be In Between 1 and 50\n";

	do
	{
		cout << "Enter your guess: ";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "Sorry, too high! Try Again: \n"; 
		else if (guess < num)
			
				cout << "Sorry, too low! Try Again: \n";
			
		else
				cout << "Nice Job! You guessed it in " << tries << " tries!\n";
			
		
	} while (guess != num);
	return 0;

}
