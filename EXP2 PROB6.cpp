#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int a;
	int answer = 0; 
	int b = answer;

		do {
			cout << "Enter a number: ";
			cin >> a;
				if (a <= 0) {
				cout << "Thank you!" << endl;
				break; 
				}
			for (int i = 0; i <= a; i++) {
				answer += i;
			}

		cout << "The sum of all whole numbers from 1 to " << a << " is " << answer << "." << endl;
		answer = 0;
		}

		while ( a!=0 );
		
	getch();
	return 0;
}
