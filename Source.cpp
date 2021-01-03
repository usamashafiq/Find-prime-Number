#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
void main()
{
	int a, c=0;
	cout << "Enter a number for checking prime " << endl;
	cin >> a;
	if (a < 0) { 
		cout << "Enter a positive number ";
	}
	else {
		for (int i = 2; i < a; i++) {
			if (a%i == 0) {

				c++;
			}
		}
		if (c == 0) {
			cout << a << " its a prime number";
		}
		else {
			cout << a << " its not a prime number";
		}
	}

	_getch();
}
