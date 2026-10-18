#pragma once

#include "vehicle.h"
#include "car.h"
#include "bike.h"
#include <string>

class vehicleFactory {
	
public:
	static vehicle* getVehicle(std::string type) {
		
		if (type == "car") {
			return new car();
		}
		else if (type == "bike") {
			return new bike();
		}
	}
};
