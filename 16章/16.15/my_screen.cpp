#include"my_screen.h"

int main() {
	Screen<5, 5> myScreen;
	Screen<6, 6> myScreen2;
	myScreen.move(3, 3).set('#').display(cout);
	cout << "\n";
	myScreen.display(cout);
	cout << "\n";

	cin >> myScreen2;
	cout << myScreen2;
}

