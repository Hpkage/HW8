#include "Agent.h"

void Agent::perceive(Environment& env) {
	temperature = env.getTemp();
}

void Agent::think() {
	if (temperature <= 60) {
		action = "on";
	}
	else if (temperature >= 75) {
		action = "off";
	}
}

void Agent::act(Environment& env) {
	env.switchHeater(action);
}