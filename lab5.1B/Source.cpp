#include "Money.h"
#include "MyException.h"
#include <iostream>

int main() {
	try {
		Money mon1;
		Money mon2(5, 2, 1, 0, 5, 0, 1, 8, 0, 2, 8, 5, 13, 14, 15);
		Money mon3(mon2);

		std::cout << "mon1 = "; std::cin >> mon1;
		std::cout << "mon1: " << mon1 << std::endl;
		std::cout << "mon1 total: " << +mon1 << std::endl;
		std::cout << mon1.displayTotal() << std::endl;

		std::cout << "mon2: " << mon2 << std::endl;
		std::cout << "mon2 total: " << +mon2 << std::endl;
		std::cout << mon2.displayTotal() << std::endl;

		std::cout << "mon3: " << std::endl;
		std::string a, b;
		a = mon3.toString();
		std::cout << a << std::endl;
		std::cout << "mon3 total: " << +mon3 << std::endl;
		b = mon3.displayTotal();
		std::cout << b << std::endl;

		if (mon1 == mon2) {
			std::cout << "mon1 = mon2" << std::endl;
		}
		else std::cout << "mon1 != mon2" << std::endl;
		int n;
		cout << "n = "; cin >> n;
		mon1 / n;
		std::cout << "mon1 sum devide by " << n << ": " << mon1.getTotal() << std::endl;

		double t = mon2 / mon3;
		std::cout << "mon2/mon3 = " << t << std::endl;

		if (mon1 >= mon2) {
			std::cout << "mon1 >= mon2" << std::endl;
		}
		else std::cout << "mon1 !>= mon2" << std::endl;

		if (mon1 <= mon2) {
			std::cout << "mon1 <= mon2" << std::endl;
		}
		else std::cout << "mon1 !<= mon2" << std::endl;

		if (mon1 > mon2) {
			std::cout << "mon1 > mon2" << std::endl;
		}
		else std::cout << "mon1 !> mon2" << std::endl;

		if (mon1 < mon2) {
			std::cout << "mon1 < mon2" << std::endl;
		}
		else std::cout << "mon1 !< mon2" << std::endl;

		cout << "mon1++: " << mon1++ << endl;
		cout << mon1.getTotal() << endl;
		cout << "++mon1: " << ++mon1 << endl;
		cout << mon1 << endl;

		cout << "mon1--: " << mon1-- << endl;
		cout << mon1.getTotal() << endl;
		cout << "--mon1: " << --mon1 << endl;
		cout << mon1 << endl;
	}
	catch (const MyException& e) {
		std::cerr << "Custom exception: " << e.what() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << "An error occurred: " << e.what() << std::endl;
	}

	cin.get();
	return 0;
}
