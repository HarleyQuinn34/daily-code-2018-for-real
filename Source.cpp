#include<iostream>
#include<string>
using namespace std;
enum pets { dog, Kitty, Sonic, Reann };
//Base class 
class Pet
{
private:
protected:
	int hunger;
	int cleanliness;
	int thirst;
	int boredom;
	int needspotty;

	string name;
public:
	void feed();
	void clean();
	void water();
	void bathroom();
	void play();
	
	void printInfo();

};

// Sub class inheriting from Base Class(Pet) 
class Dog : public Pet
{
private:
	int boredom;
	int needToPee;
public:
	void play();
	void goOut();
	void initDog(string n);
	void printInfo();
	void update(); //pass time
	bool die();
};

class kitty : public Pet {
private:
	int hairball;
	int lonliness;

public:
	void play();
	void brush();
	void initKitty(string n);
	void printInfo();
	bool die();
	void update(); //pass time
};
class sonic : public Pet {
private:
	int speed;
	int chile;

public:
	void run();
	void atacc();
	void initsonic(string n);
	void printInfo();
	bool die();
	void update(); //pass time

};
class reann : public Pet {
private:
	int height;
	int heat;

public:
	void grow();
	void temp();
	void initreann(string n);
	void printInfo();
	bool die();
	void update(); //pass time
};
//main function 
int main() {

	int petType;
	Dog Fido;
	kitty CreamPuff;
	reann reann;
	sonic sanicc;

	char input;
	string name;
	cout << "Welcome to Pet Simulator! To make a pet press (d) for a dog, (k) for a kitten, (s) for a hedgehog, (r) reann." << endl;
	cin >> input;
	cout << "enter name of pet" << endl;
	cin >> name;
	if (input == 'd') {

		Fido.initDog(name);
		petType = dog;
	}
	else if (input == 'k') {

		CreamPuff.initKitty(name);
		petType = Kitty;
	}
	else if (input == 's') {

		sanicc.initsonic(name);
		petType = Sonic;
	}
	else if (input == 'r') {

		reann.initreann(name);
		petType = Reann;
	}
	while (1) {

		switch (petType) {
		case dog:
			if (Fido.die()==true) {
				cout << "your pet has died." << endl;
				return 0; //kill the game
			}
			Fido.update(); //lower all numbers!
			Fido.printInfo();
			cout << "press 'f' to feed, 'c' to clean, 'p' to play, 'g' to go out, 'w' to water " << endl;
			cin >> input;
			if (input == 'f')
				Fido.feed();
			else if (input == 'c')//change these so other functions are called
				Fido.clean();
			else if (input == 'p')
				Fido.play();
			else if (input == 'g')
				Fido.goOut();
			
			break;
			//add cases for kitty, reann, and sonic here
		
		case Kitty:
			if (CreamPuff.die() == true) {
				cout << "your pet has died." << endl;
				return 0; //kill the game
			}
			CreamPuff.update(); //lower all numbers!
			CreamPuff.printInfo();
			cout << "press 'f' to feed, 'c' to clean, 'p' to play, 'g' to go out " << endl;
			cin >> input;
			if (input == 'f')
				CreamPuff.feed();
			else if (input == 'c')//change these so other functions are called
				CreamPuff.clean();
			else if (input == 'p')
				CreamPuff.play();
			else if (input == 'g')
				CreamPuff.brush();
			
			break;
			//add cases for kitty, reann, and sonic here
		case Sonic:
			if (sanicc.die() == true) {
				cout << "your pet has died." << endl;
				return 0; //kill the game
			}
			sanicc.update(); //lower all numbers!
			sanicc.printInfo();
			cout << "press 'f' to feed, 'c' to clean, 'p' to play, 'a' to go out and atacc " << endl;
			cin >> input;
			if (input == 'f')
				sanicc.feed();
			else if (input == 'c')//change these so other functions are called
				sanicc.clean();
			else if (input == 'a')
				sanicc.atacc();
			else if (input == 'p')
				sanicc.run();
		
			break;
		case Reann:
			if (reann.die() == true) {
			cout << "your pet has died." << endl;
				return 0; //kill the game
			}
			reann.update(); //lower all numbers!
			reann.printInfo();
			cout << "press 'f' to feed, 'c' to clean, 'g' to grow, 'k' to cool down " << endl;
			cin >> input;
			if (input == 'f')
				reann.feed();
			else if (input == 'c')//change these so other functions are called
				reann.clean();
			else if (input == 'g')
				reann.grow();
			else if (input == 'k')
				reann.temp();

			break;
}
	}

	



	return 0;
}


void Pet::feed() {
	hunger++;
}
void  Pet::clean() {
	cleanliness++;
}
void Pet::water() {
	thirst++;
}
void  Pet::play() {
	boredom++;
}
void  Pet::bathroom() {
	needspotty++;
}
void  Pet::printInfo() {
	cout << "your pet " << name << " has a hunger level of " << hunger << " , and a cleanliness level of " << cleanliness << endl;
}
////////////////////////////////////////dog functions
void Dog::play() {
	boredom++;
}
void Dog::goOut() {
	needToPee++;

}
void Dog::initDog(string n) {
	hunger = 100;
	cleanliness = 100;
	name = n;
	boredom = 100;
	needToPee = 100;
}
void Dog::update() {
	hunger -= 1;
	cleanliness -= 1;
	boredom -= 1;
	needToPee -= 1;


}
bool Dog::die() {
	if (hunger <= 0 || cleanliness <= 0 || boredom <= 0 || needToPee <= 0)
		return true;
	else
		return false;

}

void  Dog::printInfo() {
	cout << "your pet " << name << " has a hunger   level of " << hunger << " , and a cleanliness level of " << cleanliness << endl;
	cout << "their boredom level is " << boredom << " , and their need to pee is " << needToPee << endl;
	cout << endl << endl;

}

void kitty::play() {
	lonliness += rand() % 20;
}
void kitty::brush() {
	hairball += rand() % 20;
}


void kitty::initKitty(string n) {
	hunger = rand() % 100;
	cleanliness = rand() % 100;
	name = n;
	hairball = rand() % 100;
	lonliness = rand() % 100;

}
void kitty::update() {
	hunger -= 1;
	cleanliness -= 1;
	lonliness -= 1;
	hairball -= 1;


}
bool kitty::die() {
	if (hunger <= 0 || cleanliness <= 0 || lonliness <= 0 || hairball <= 0)
		return true;
	else
		return false;

}
void  kitty::printInfo() {
	cout << "your pet " << name << " has a hunger level of " << hunger << " , and a cleanliness level of " << cleanliness << endl;
	cout << "their hairball level is " << hairball << " , and their lonliness is " << lonliness << endl;
	cout << endl << endl;
}
void sonic::run() {
	speed += rand() % 20;
}
void sonic::atacc() {
	chile += rand() % 20;

}

void sonic::initsonic(string n) {
	hunger = 100;
	cleanliness = 100;
	speed = rand() % 100;
	chile = rand() % 100;
	name = n;

}
void sonic::update() {
	hunger -= 1;
	cleanliness -= 1;
	speed -= 1;
	chile -= 1;


}
bool sonic::die() {
	if (hunger <= 0 || cleanliness <= 0 || speed <= 0 || chile <= 0)
		return true;
	else
		return false;

}

void  sonic::printInfo() {
	cout << "your pet " << name << " has a speed level of " << speed << " , and a chile level of " << chile << endl;
	cout << endl << endl;

}

void reann::grow() {
	height += rand() % 20;
}
void reann::temp() {
	heat += rand() % 20;

}

void reann::initreann(string n) {
	hunger = 100;
	cleanliness = 100;
	height = rand() % 100;
	heat = rand() % 100;
	name = n;

}
void reann::update() {
	hunger -= 1;
	cleanliness -= 1;
	height -= 1;
	heat -= 1;


}
bool reann::die() {
	if (hunger <= 0 || cleanliness <= 0 || height <= 0 || heat <= 0)
		return true;
	else
	return false;

}
void  reann::printInfo() {
	cout << "your pet " << name << " has a hunger level of " << hunger << " , and a cleanliness level of " << cleanliness << endl;
	cout << "your pet " << name << " has a height level of " << height << " , and a heat level of " << heat << endl;
	cout << endl << endl;

}