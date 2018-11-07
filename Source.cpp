#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string line;
	ifstream myfile("save1.txt");
	while (getline(myfile, line)) {
		cout << line << '\n';
	}
	myfile.close();
	system("pause");
}