#ifndef SIMULATOR_H
#define SIMULATOR_H

#include "Agent.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

class Simulator {
public:
	void askOwner();

	int getTemp();

	void run();

private:
	int temperature = 0;
};

#endif
