#include "Agent.h"

int Agent::perceive(Environment& env) {
	return env.getTemp();
}