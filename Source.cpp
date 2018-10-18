#include<iostream>
using namespace std;
double slopecalc(int a, int b, int c, int d);
int main() {
	int a, b, c, d;
	cout << "Enter a, b, c , d" << endl;
	cin >> a;
	cin >> b,
	cin >> c;
	cin >> d;

	cout <<slopecalc(a, b, c, d)<< endl;//prints out finished calculation
	 
	

	system("pause");
}
double slopecalc(int a, int b, int c, int d) {
	
	return (d - b) / (c - a);
	


}