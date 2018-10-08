#include <iostream>
using namespace std;

void roomcolor(int g);
void monster();
int main() {
	int room = 1;
	char input;

	while (1) {
		roomcolor(room);
		switch (room)
		{
		case 1:
			
			cout << "you are in room one " << endl;
			cout << "you can go east (e)" << endl;
			cin >> input;
			if (input == 'e')
				room = 2;
			break;
		case 2:
			monster();
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
			monster();
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
void monster() {
	int number = rand() % 100 + 1;
	cout << number << endl;
	if (number <= 10) 
		cout << "A wild witch spawned in!" << endl;
	
	else if (10<number && number <= 30)
		cout << "A staggering zombie came out of no where!" << endl;
	
	else if (30<number && number <= 60)
		cout << "A mildy adaquete sleleton popped up!" << endl;
	
	else if (60<number && number <= 100)
		cout << "issa spider" << endl;
	else 
		cout << "yeet";


		
	
}