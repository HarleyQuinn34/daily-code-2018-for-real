#include <iostream>
#include<ctime>
using namespace std;

void snowflake(int a, int b);

int main() {
	srand(time(NULL));
	int a = 90;
	int b = 900000;





	snowflake(a, b);


	system("pause");
}

void snowflake(int a, int b) {
	int num;
	for (int i = 1; i < b; i++) {//"game loop" how long it runs
		num = rand() % a + 1;

		for (int t = 1; t <num; t++)//print a bunch of spaces
			cout << " ";

		cout << " * ";//and one flake
	}



}
