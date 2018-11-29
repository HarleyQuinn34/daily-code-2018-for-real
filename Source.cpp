#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int num;
int num2;
int main() {
	//output file
	ofstream myfile;
	myfile.open("save1.txt");
	//input file
	ifstream myfile2;
	myfile2.open("save.txt");
	myfile2 >> num;
	for (int i = 0; i < num; i++) {
		myfile2 >> num2;
		for (int m = 0; m < num2; m++){
			for (int j = 0; j < num2; j++) {
				myfile << "$";
			}
			myfile << endl;
	}
}
		myfile.close();
		myfile2.close();
		system("pause");
	}