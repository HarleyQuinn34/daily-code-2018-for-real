#include <iostream>
using namespace std;



int main() {
	//variable declarations
	int num[10];
	int temp;
	//load in 10 numbers from user into the array
	for (int i = 0; i < 10; i++) {
		cout << "In order for this to work you will need to give us 10 random numbers." << endl;
		cin >> num[i];
	}

	//bubble sort!
	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < 9; i++) {
			if (num[i] > num[i + 1]) {
				temp = num[i + 1];
				num[i + 1] = num[i];
				num[i] = temp;
			}
		}
	}

	//print out the final array
	for (int i = 0; i < 10; i++) {
		cout << num[i] << "  ";
	}



	system("pause");
}