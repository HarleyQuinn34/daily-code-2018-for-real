#include <iostream>
using namespace std;

void roomcolor(int g);
int monster();
void loot();
int damagecal(char t);
int main() {
	int xp = 0;
	int level = 0;
	int room = 1;
	char input;
	int hp = 100;
	while (hp>0) {
		xp += 100;
		cout << "your hp is" << hp << endl;
		cout <<"Your XP is: "<< xp << " Your level is " <<level<<endl;
		if (xp >= 500) {
			loot();
			xp = 0;
			level++;
		}
		roomcolor(room);
		switch (room){

		case 1:
			
			cout << "you are in room one " << endl;
			cout << "you can go east (e)" << endl;
			cin >> input;
			if (input == 'e')
				room = 2;
			break;
		case 2:
		hp -=	monster();
			cout << "you are in room two " << endl;
			cout << "you can go north (n) or west(w)" << endl;
			cin >> input;
			if (input == 'n')
				room = 3;
			else if (input == 'w')
				room = 1;
			break;
		case 3:
			
			cout << "you are in room three " << endl;
			cout << "you can go east (e) or south (s)" << endl;
			cin >> input;
			if (input == 'e')
				room = 4;
			else if (input == 's')
				room = 2;
			break;
		case 4:
			hp -= monster();
			cout << "you are in room four " << endl;
			cout << "you can go west (w)" << endl;
			cin >> input;
			if (input == 'w')
				room = 3;
			break;
		}

	}//while
}//main
void roomcolor(int g) {
	if (g == 1)
		system("Color 5f");
	if (g == 2)
		system("Color 2f");
	if (g == 3)
		system("Color 4f");
	if (g == 4)
		system("Color 1f");

}//def
int monster() {
	int number = rand() % 100 + 1;
	//cout << number << endl;
	if (number <= 10) {
		cout << "A wild witch spawned in!" << endl;
		return damagecal('w');
	}
	else if (10 < number && number <= 30) {
		cout << "A staggering zombie came out of no where!" << endl;
		return damagecal('z');
	}
	
	else if (30 < number && number <= 60) {
		cout << "A mildy adaquete sleleton popped up!" << endl;

		return damagecal('s');
	}
	
	else if (60 < number && number <= 100) {
		cout << "issa spider" << endl;
		return damagecal('p');
	}
	else 
		cout << "yeet";
}
void loot() {
	double number = rand() % 10000 + 1;
	cout << number << endl;
	if (number <= 5820)
		cout << "You Recieved a common!" << endl;

	else if (5820 <number && number <= 8990)
		cout << "You Recieved a rare!" << endl;

	else if (8990<number && number <= 9745)
		cout << "Now thats epic!" << endl;

	else if (9745<number && number <= 1000)
		cout << "Legendary!" << endl;
	else
		cout << "yeet";



}
int damagecal(char t) {

	if (t == 's')
		return rand() % 20 + 41;

	else if (t == 'z')//between 10-50
		return rand() % 41 + 10;

	else if (t == 'w')// between 50-70
		return rand() % 21 - 50;

	else if (t == 'p')
		return rand() % 41 ;
}
