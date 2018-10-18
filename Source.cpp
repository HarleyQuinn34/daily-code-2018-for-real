#include <iostream>
using namespace std;
int main() {
	int both=0 ;
	bool arro[8];
	bool arra[8];
	cout<<"Enter your first set of 8 numbers"<<endl;
	for (int j = 0; j < 8; j++)
		cin >> arro[j];
	cout << "Enter your second set of 8 numbers" << endl;
	for (int i = 0; i < 8; i++)
		cin >> arra[i];

	for (int j = 0; j < 8; j++) 
		if (arro[j] == arra[j])
			both++;
	
	cout<<"There are "<<both<<" numbers that are the same."<<endl;
	system("pause");
}