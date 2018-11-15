#include <iostream>
#include <fstream>
using namespace std;
int num;
int num2;
int num3;

int main() {
	//output file
	ofstream myfile;
	myfile.open("save1.txt");

	//input file
	ifstream myfile2;
	myfile2.open("save.txt");

	myfile2 >> num;
	//cout << "num is " << num << endl;
	for (int i = 0; i < num; i++) {
		cout << "loop " << num;
		myfile2 >> num2;
		myfile2 >> num3;


		myfile << num2 + num3<<" ";
		myfile << num2 * num3 << endl;
	}
	myfile.close();
	myfile2.close();
	system("pause");
}