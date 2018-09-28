#include <iostream>
using namespace std;

double vol(int l,  int w, int h);

int main(){
	int l;
	int w;
	int h;
	

cout << "Please enter length." << endl;
	cin >> l;
	cout << "Please enter width." << endl;
	cin >> w;
	cout << "Please enter height." << endl;
	cin >> h;
cout << "your volume is: " << vol( l,  w,  h) << endl;
system("pause");
}
double vol(int l, int w, int h) {
	
	double vol = l*w*h / 3;
	
	return vol;
}
