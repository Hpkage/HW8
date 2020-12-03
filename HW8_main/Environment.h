#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <iostream>
#include <string>

using std::string;

class Environment {
public:	
	void iterate();

	void switchHeater();

	int getTemp();

	void setTemp(int temp);

private:
	int temperature = 0;
	string heater = "off";
};

#endif
