#include <iostream>
using namespace std;
int main() {
	char input = 'g';
	int question = 1;
	bool guessed = false;
	int num = 0;
	cout << "It is a sunny morning and its lab day. Your class is going to go on a field trip! " << endl;
	cout << "Your teacher is a scientist so the class went to a laboratory to see what the latest research is." << endl;
	while (guessed == false) {
		switch (question) {
		case 1:	cout << "You wake up tired and you compliplate if you should go to the field trip(f) or stay home(h)? press f or h" << endl;
			cin >> input;
			if (input == 'f')
				question = 2;
			else if (input == 'h')
				question = 4;
			break;
		case 2:
			cout << "You arrive at the laboratory and you are greeted by the tour guide. She brings the class in and begins the tour." << endl;
			cout << "You walk around the lab, looking at all the people in the rooms.The tour guide shows the class the genetics department." << endl;
			cout << "All the rooms have similar designs but different equipment inside. The tour guide stops at the room where they research cures for disease." << endl;
			cout << "All the orange juice you drank for breakfast hits you, you have to go to the bathroom." << endl;
			cout << "You ask the guide where the bathrooms are and she shows you." << endl;
			cout << "On your way you see a bright glowing blue light coming from under a door, and you here screaming from inside!" << endl;
			cout << "Do you go investigate the light and screams(l) or go to the bathroom like a boss(b)? press l or b" << endl;
			cin >> input;
			if (input == 'l')
				question = 3;
			if (input == 'b') {
				cout << "You go to the bathroom and start walking back to your group" << endl;
				cout << "You walk past the door that was glowing and there are medics helping people up and checking if they are ok." << endl;
				cout << "You get to your class group and start walking in the back. You try to find your friends but what catches your eye is your crush." << endl;
				cout << "You want to talk to her but feeling hesitant. Do you want to talk to her? y/n?" << endl;
				cin >> input;
				if (input == 'y') {
					cout << "You walk by her and ask her does she like the trip. You guys start talking more than just the field trip and then ask her on a date." << endl;
					cout << "To your surprise she says yes, after a couple dates you guys start dating and you are happy:)" << endl;

					system("pause");
					return 0;
				}//end of if
				if (input == 'n') {
					cout << "You feel like you do not want to embarrass yourself, so you look for your friends" << endl;
					cout << "You see them towards the right of the group so you go join them." << endl;
					cout << "You guys have a good time laughing and joking around going around the lab. You had a good time at the lab hanging out with your friends." << endl;

					system("pause");
					return 0;
				}
			}
			break;
		case 3:
			cout << "You open the door in a hurry and there are people in white suit laying on the ground. Suddenly you feel tired and collapse on the ground." << endl;
			cout << "You wake up and there are medics surrounding you, they say you need to go to the hospital and get checked out." << endl;
			cout << "You get to the hospital and get a physical. They tell you that there is nothing wrong with you so you go home." << endl;
			cout << "When you get home you are tired so you go straight to bed. At 2 am you wake up thirsty and start heading to the kitchen." << endl;
			cout << "While you are heading to the kitchen you notice that you aren't walking at all! You look down and you are floating!" << endl;
			cout << "You stand there knowing you are flying. You start practicing task with your powers at night. You start getting stronger and stronger" << endl;
			cout << "You design your own suit to protect your identity." << endl;
			cout << "You are a super powered human and have the ability to fly and have super strength. One night you want to go explore the city to see if you can do anything to help." << endl;
			cout << "After 30 minutes there is nothing going on, but then you suddenly hear yelling. You rush to the scene and find a armed robbery." << endl;
			cout << "You see the suspect running away with the money. Since he doesn't look that experienced you full force dive bomb straight toward him kicking him in the head and he just collapses." << endl;
			cout << "He is out cold and the bag of money is laying right by him. You think to yourself, 'should I take the money, I do need it to pay for my moms bills.'" << endl;
			cout << "So, do you take the money, to help out with the bills(y) or do you give it back(n). y/n" << endl;
			cin >> input;
			if (input == 'y')
				question = 5;
			else if (input == 'n')
				question = 6;
			break;
		case 4:
			cout << "You stayed home and played some video games, it was a pretty chill day." << endl;

			system("pause");
			return 0;
			break;
		case 5:
			cout << "you are a villain" << endl;
			system("pause");
			return 0;
			break;
		case 6:
			cout << "you are a hero" << endl;
			system("pause");
			return 0;
			break;
		}//end of switch
	}//end of while
}//end of main

