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
	cout << "Enter your perferred temperature range: ";
	cin >> userinput;
	temperature = userinput;
}

int Simulator::getTemp() {
	return temperature;
}

void Simulator::run() {
	Environment start;
	Agent action;

	int iterate = 0;

	while (true) {
		if (iterate == 10) {
			askOwner();
			iterate = 0;
			start.setTemp(getTemp());
		}
		action.perceive(start);
		action.think();
		action.act(start);
		start.iterate();
		iterate += 1;
		cout << start.getTemp() << endl;
	}
}