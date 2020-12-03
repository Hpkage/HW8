#include "Simulator.h"

void Simulator::askOwner() {
	string quitProg;
	cout << "Would you like to quit the program?" << endl;
	cout << "Type yes or no: ";
	cin >> quitProg;
	if (quitProg == "yes") {
		exit(1);
	}

	int userinput;
	cout << "Enter your perferred temperature range:";
	cin >> userinput;
	temperature = userinput;
}