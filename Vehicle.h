#ifndef VEHICLE_H
#define VEHICLE_H

namespace class_diagram {
	class Vehicle {

	private:
		int type;
		int wheels;
		int doors;

	public:
		void getType();

		void getWheels();

		void getDoors();
	};
}

#endif
