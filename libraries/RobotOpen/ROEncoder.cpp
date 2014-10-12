
#include "RobotOpen.h"

/* Constructor */
ROEncoder::ROEncoder(uint8_t channel)
{
    _channel = channel;
}

int32_t ROEncoder::read() {
	return RobotOpen.readEncoder(_channel);
}

void ROEncoder::reset() {
	RobotOpen.resetEncoder(_channel);
}