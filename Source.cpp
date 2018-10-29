/*Isaiah Salinas 10/29/18
Write a text based number-guessing game program. 
The program picks a number between 1 and 100 and asks the user to guess what number it has chosen. 
If the user guesses wrong, the program tells them whether they're too high or too low. 
When the user guesses correctly, the program prints out a congratulatory message and tells them how many turns it took them.
When the player finally wins, the program should ask them if they want to play again, and if not, quit the game.*/
#include <iostream>
#include <ctime>
using namespace std;


int main() {
	int turn = 0;
	int input=200;
	char in = 'y';
	srand(time(NULL));
	int num;
	
	while (in != 'n') {//starts over when you guess right
		num = rand() % 100 + 1;

		while (num != input) { //keep going until your guess (input) equals the random number (num)
			
			cout << "You have guessed: " << turn <<" times."<< endl;
			cout << "Guess arandom number between 1-100." << endl;
			cin >> input;
			if (input == num) {
                turn++;
				cout << "nice :)" << endl;
				cout << "You have guessed in total: " << turn << " times." << endl;\
				cout << "Do you want to play again?" << endl;
				cout << "(y) for yes or (n) for no." << endl;
				cin >> in;
			}
			else if (input < num) {
			cout << "The number you have guessed is too low." << endl;
			 turn++ ;
		}
			else if (input > num) {
				cout << "The number you have guessed is too high." << endl;
				 turn++;
			}
		}//end turn

	}//end game
	cout << "goodbye!" << endl;
}