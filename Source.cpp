#include <iostream>
using namespace std;
///////////////declarations
double hiprec(int c, int l, int a);
double gabe( int l, int a);
double hipsqr( int l, int a);
double leanto( int l, int a);
double man(int c, int l, int a);


int main() {
	//variables for functions
	int c=0;
	int a=0;
	int l = 0;
	//users input
	char input;
	//switch delcare/ name
	int roof;
	while (1) {
		cout << "What kind of roof is it?" << endl;
		cout << "(h) for hip roof rectangle bldg." << endl;
		cout << "(g) for  gable roof." << endl;
		cout << "(s) for hip roof square bldg." << endl;
		cout << "(l) for lean to roof." << endl;
		cout << "(m) for mansard roof." << endl;
		cin >> input;

		//asking which roof the user has and then sending them to switch statement
		if (input == 'h')
			roof = 1;
		else if (input == 'g')
			roof = 2;
		else if (input == 's')
			roof = 3;
		else if (input == 'l')
			roof = 4;
		else if (input == 'm')
			roof = 5;
		//switch statement
		switch (roof) {
		case 1:
			cout << "Your roof square footage is " << hiprec(c, l, a) << endl;
			break;
		case 2:
			cout << "Your roof square footage is " << gabe(l, a) << endl;
			break;
		case 3:
			cout << "Your roof square footage is " << hipsqr(l, a) << endl;
			break;
		case 4:
			cout << "Your roof square footage is " << leanto(l, a) << endl;
			break;
		case 5:
			cout << "Your roof square footage is " << man(c, l, a) << endl;
			break;
		}//end of switch
	}
	system("pause");
}//end of main
///////////////////////////////function definitions
double hiprec(int c, int l, int a) {
	//double sum;
	cout << "what is your c of the roof?" << endl;
	cin >> c;
	cout << "what is your length of roof?" << endl;
	cin >> l;
	cout << "what is your area of roof?" << endl;
	cin >> a;
	return (c + l)*a / 2;

}
double gabe( int l, int a) {
	//double sum;

	cout << "what is your length of roof?" << endl;
	cin >> l;
	cout << "what is your area of roof?" << endl;
	cin >> a;
	return 2*a*l;

}
double hipsqr(int l, int a) {
	//double sum;

	cout << "what is your length of roof?" << endl;
	cin >> l;
	cout << "what is your area of roof?" << endl;
	cin >> a;
	return  a*l/2;

}
double leanto(int l, int a) {
	//double sum;

	cout << "what is your length of roof?" << endl;
	cin >> l;
	cout << "what is your area of roof?" << endl;
	cin >> a;
	return  a*l;

}
double man(int c, int l, int a) {
	//double sum;
	cout << "what is your c of the roof?" << endl;
	cin >> c;
	cout << "what is your length of roof?" << endl;
	cin >> l;
	cout << "what is your area of roof?" << endl;
	cin >> a;
	return (a + l)*c / 2;

}