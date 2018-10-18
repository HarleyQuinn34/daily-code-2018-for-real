#include <iostream >
using namespace std;
int main() {
	int MyArray[12];
	int Number = 0;
	for (int j=0; j < 12; j++)
		cin >> MyArray[j];
	for (int i=0; i < 12; i++) {
		if (MyArray[i] > Number) {
			Number = MyArray[i];
		}

	}
	cout << "The biggest number is " << Number << endl;
	system("pause");
}