#ifndef ACCOUNT_H
#define ACCOUNT_H

namespace class_diagram {
	class Account {

	private:
		int balance;
		int type;
		int branch;

	public:
		void getBalance();

		void getType();

		void getBranch();
	};
}

#endif
