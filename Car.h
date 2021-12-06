#ifndef CAR_H
#define CAR_H

namespace class_diagram {
	class Car : class_diagram::Vehicle {

	private:
		int name;
		int model;
		int year;
		int type;
		int cost;
		int damage;

	public:
		void getName();

		void getModal();

		void getYear();

		void getType();

		void getCost();

		void getDamage();
	};
}

#endif
