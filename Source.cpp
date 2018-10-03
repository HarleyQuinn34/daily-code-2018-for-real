#include <iostream>
#include <Windows.h>
using namespace std;

bool PixelCollision(int a, int b, int c, int d);

int main() {
	int x1;
	int y1;
	int x2;
	int y2;
	while (1) {
		cout << "Input two (x,y) coordinates." << endl;
		cin >> x1 >> y1 >> x2 >> y2;
		if (PixelCollision(x1, y1, x2, y2) == true) {
			cout << "There was a collision" << endl;
			Beep(1000, 5);
		}
		else {
			cout << "There wasn't a collision" << endl;
		}
		system("pause");
	}
}

bool PixelCollision(int a, int b, int c, int d) {
	if (a == c) {
		if (b == d) {
			
			return true;
		}
	}
	return false;
}