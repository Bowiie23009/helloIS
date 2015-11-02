#include <iostream>

class Calculator
{
	protected:
		int num1;
		int num2;
		char oprt;
		int result;
		char choice;
	public:
		int calculate();
};

int Calculator::calculate()
{
 	std::cout << "Enter first number: \n";
	std::cin >> num1;
	std::cout << "Enter second number: \n";
	std::cin >> num2;
	std::cout << "Choose math operator: \n";
	std::cin >> oprt;
	switch(oprt) {
		case '+' : result = num1 + num2;
			   std::cout << "result = " << result << "\n";
		break;
		case '-' : result = num1 - num2;
			   std::cout << "result = " << result << "\n";
		break;
		case '*' : result = num1 * num2;
			   std::cout << "result = " << result << "\n";
		break;
		case '/' : result = num1 / num2;
			   std::cout << "result = " << result << "\n";
		break;
		default: std::cout << "Invalid operator!. \n";
	}
	return 0;
}

class NerdyCalculator: public Calculator
{
	public:
		void nerdcalculator();
		void loop();
};

void NerdyCalculator::nerdcalculator()
{
	std::cout << "nerdy result = " << result + 1 << " \n ";
}


void NerdyCalculator::loop()
{
	do {
	       	calculate();
					nerdcalculator();
					std::cout << "Do you want to calculatte more ? [y/n] \n";
					std::cin >> choice;
	   }
		 while(choice == 'y');
}

int main()
{
			NerdyCalculator nerdcal;
			nerdcal.loop();
			return 0;
}
