#include "Environment.h"

void Environment::iterate(){
	if (heater == "on") {
		temperature += 1;
	}
	else {
		temperature -= 1;
	}
}

void Environment::switchHeater() {
	if (heater == "on") {
		heater = "off";
	}
	else {
		heater = "on";
	}
}

int Environment::getTemp() {
	return temperature;
}

void Environment::setTemp(int temp) {
	temperature = temp;
}