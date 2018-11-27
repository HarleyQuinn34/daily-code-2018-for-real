#include <iostream>
using namespace std;
int main() {
	int score;
	while (1) {
		cout << "what is your score cuh?" << endl;
		cin >> score;
		if (score < 100)
			cout << "yous a buster" << endl;
		else if (score > 100 && score < 1000)
			cout << "You aight cuh" << endl;
		else if (score > 1000)
			cout << "damn cuh, i see you " << endl;
		system("pause");
	}
}