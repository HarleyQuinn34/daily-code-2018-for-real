/*Create a 12-slot string array.
Ask the user to enter their 12 favorite video games. 
Then, search through the array for "Bubble Bobble". 
If their game contains it, tell them they're awesome. 
Otherwise, tell them they should play BUBBLE BOBBLE.
Isaiah & Treway
10/30/18*/
#include <iostream>
#include <string>
using namespace std;
string game[12];
int main() {
cout << "List your 12 favorite games" << endl;
for (int j = 0; j < 12; j++) {
	getline(cin, game[j]);//when using strings getline = cin
	if (game[j].compare("bubble bobble") == 0)//when using strings use .compare for checking a string array
		cout << "Now thats EPIC." << endl;
	else
		cout << "You should play bubble bobble, it is very epic." << endl;
	}
	system("pause");
}