#ifndef BANK_H
#define BANK_H

namespace class_diagram {
	class Bank {

	private:
		int bank_ID;
		int name;
		int location;
		int type;

	public:
		void getName();

		void getLocation();

		void getType();
	};
}

#endif
