#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() {
	ofstream mifile;
	string line;
	ifstream myfile("prob01.in.txt");
	while (getline(myfile, line)) {
		for (int i = 0; i < 2; i++) {
			cout << line << '\n';
			mifile.open("save1.txt");
			mifile << line;
		}
	}
	mifile.close();
	myfile.close();
	system("pause");
}