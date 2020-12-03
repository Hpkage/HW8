#ifndef AGENT_H
#define AGENT_H

#include <iostream>
#include <string>
#include "Environment.h"

using std::string;

class Agent {
public:
	void perceive(Environment& env);

	void think();

	void act(Environment& env);

private:
	int temperature = 0;
	string action = "off";
};

#endif
