#include <iostream>
using namespace std;
int main() {
	char input = 'g';
	int question = 1;
	bool guessed = false;
	int num = 0;
	cout << "Hello, I am going to try to guess what player you are going to play as from the smash bros for the nintendo 64." << endl;

	while (guessed == false) {
		switch (question) {
		case 1:	cout << "First question, is your player from the mario bros universe? (y/n)" << endl;
		cin >> input; 
		if (input == 'y')
			question = 2;
		else if (input == 'n')
			question = 4;
		break;
		case 2:
			cout << "Is your character an animal? (y/n)" << endl;
			cin >> input;
			if (input == 'y')
				question = 3;
			 if (input == 'n') {
				cout << "does your character wear red? (y/n)" << endl;
				cin >> input;
				if (input == 'y') {
					cout << "Is your character mario? (y/n)" << endl;
					cin >> input;
					if (input == 'y')
						cout << "Mario! Do you want to play again? (y/n)" << endl;
					if (input == 'y')
						guessed = true;
					else
						cout << "you are lying" << endl;
				}//end of if
			 if (input == 'n') {
					cout << "Is your character luigi? (y/n)" << endl;
					cin >> input;
					if (input == 'y')
						cout << "Luigi! Do you want to play again? (y/n)" << endl;
					if (input == 'y')
						guessed = true;
					else
						cout << "you are lying" << endl;

				}//end of 2nd else if
			}//end of else if
			break;
		case 3 :
			cout << "Does your chararcter wear a red tie? (y/n)" << endl;
			cin >> input;
			if (input == 'y') {
				cout << "Is your character Donkey Kong? (y/n)" << endl;
				cin >> input;
				if (input == 'y') {
				cout << "Donkey Kong! Do you want to play again? (y/n)" << endl;
				cin >> input;
                 if (input == 'y')
					guessed = true;
				else
					return 0;
			}
				else
					cout << "your lying" << endl;
				
			}
			 if (input == 'n')
				cout << "Is your character yoshi?" << endl;
				cin >> input;
			if (input == 'y') {
				cout << "Yoshi! Do you want to play again? (y/n)" << endl;
			if (input == 'y')
				guessed = true;
			else
				return 0;
			}
			else
				cout << "your lying" << endl;
			
			break;
		case 4:
			cout << "Is your chraracter from the legend of zelda universe? (y/n)" << endl;
			cin >> input;

			if (input == 'y') {
				cout << "Is your character link?(y/n)" << endl;
				cin >> input;
				if (input == 'y') {
					cout << "LINK! do you want to play again! (y/n)" << endl;
					cin >> input;
					if (input == 'y')
						guessed = true;
					else
						return 0;
				}
				else
					cout << "you are lying" << endl;
			}
			else if (input == 'n')
				question = 5;
			break;
		case 5:
			cout << "Is your chraracter from metroid universe? (y/n)" << endl;
			cin >> input;
			if (input == 'y') {
				cout << "Is your character samus?(y/n)" << endl;
				cin >> input;
				if (input == 'y') {
					cout << "SAMUS! do you want to play again! (y/n)" << endl;
					cin >> input;
					if (input == 'y')
						guessed = true;
					else
						return 0;
				}
				else
					cout << "you are lying" << endl;
			}
			else if (input == 'n')
				question = 6;
			break;
		case 6:
			cout << "Is your chraracter from f-zero universe? (y/n)" << endl;
			cin >> input;
			if (input == 'y') {
				cout << "Is your character Captain Falcon?(y/n)" << endl;
				cin >> input;
				if (input == 'y') {
					cout << "CAPTAIN FALCON! do you want to play again! (y/n)" << endl;
					cin >> input;
					if (input == 'y')
						guessed = true;
					else
						return 0;
				}
				else
					cout << "you are lying" << endl;
			}
			else if (input == 'n')
				question = 7;
			break;
		case 7:
			cout << "Is your chraracter from earth bound universe? (y/n)" << endl;
			cin >> input;
			if (input == 'y') {
				cout << "Is your character Ness?(y/n)" << endl;
				cin >> input;
				if (input == 'y') {
					cout << "NESS! do you want to play again! (y/n)" << endl;
					cin >> input;
					if (input == 'y')
						guessed = true;
					else
						return 0;
				}
				else
					cout << "you are lying" << endl;
			}
			else if (input == 'n')
				question = 8;
			break;
		case 8:
			cout << "Is your chraracter from Star Fox universe? (y/n)" << endl;
			cin >> input;
			if (input == 'y') {
				cout << "Is your character Fox?(y/n)" << endl;
				cin >> input;
				if (input == 'y') {
					cout << "FOX! do you want to play again! (y/n)" << endl;
					cin >> input;
					if (input == 'y')
						guessed = true;
					else
						return 0;
				}
				else
					cout << "you are lying" << endl;
			}
			else if (input == 'n')
				question = 9;
			break;

		case 9: cout << "Is your chraracter from kirby universe? (y/n)" << endl;
			cin >> input;
			if (input == 'y') {
				cout << "Is your character kirby?(y/n)" << endl;
				cin >> input;
				if (input == 'y') {
					cout << "KIRBY! do you want to play again! (y/n)" << endl;
					cin >> input;
					if (input == 'y')
						guessed = true;
					else
						return 0;
				}
				else
					cout << "you are lying" << endl;
			}
			else if (input == 'n')
				question = 10;
			break;
		case 10:
			cout << "Does your chararcter pink? (y/n)" << endl;
			cin >> input;
			if (input == 'y') {
				cout << "Is your character Jiggly Puff? (y/n)" << endl;
				cin >> input;
				if (input == 'y') {
					cout << "JIGGLY! Do you want to play again? (y/n)" << endl;
					cin >> input;
					if (input == 'y')
						guessed = true;
					else
						return 0;
				}
				else
					cout << "your lying" << endl;

			}
			if (input == 'n')
				cout << "Is your character Pikachu?" << endl;
			cin >> input;
			if (input == 'y') {
				cout << "Pikachu! Do you want to play again? (y/n)" << endl;
				if (input == 'y')
					guessed = true;
				else
					return 0;
			}
			else
				cout << "your lying" << endl;
			break;
			}//end of switch
		}//end of while
	}//end of main
	
		




