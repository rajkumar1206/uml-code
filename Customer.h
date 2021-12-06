#ifndef CUSTOMER_H
#define CUSTOMER_H

namespace class_diagram {
	class Customer {

	private:
		int name;
		int address;
		int date_of_birth;
		int email;

	public:
		void getName();

		void getAddress();

		void getDOB();

		void getEmail();
	};
}

#endif
