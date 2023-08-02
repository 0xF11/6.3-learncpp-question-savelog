#include <iostream>
#include <string>



int main()

{
	std::cout << "Hello! Please enter two numbers after eachother!\n";
	while (true) {
		int num1{};
		int num2{};

		std::cin >> num1;
		std::cin >> num2;


		if (num1 > num2) // greater than
		{
			std::cout << "(Your second number): Smaller: " << num2 << std::endl;
			std::cout << "(Your first number): Larger: " << num1 << std::endl;
		}
		else if (num2 > num1)
		{
			std::cout << "(Your first number): Smaller: " << num1 << std::endl;
			std::cout << "(Your second number): Larger: " << num2 << std::endl;
		}
		// SWAP NUMBERS NEST.
		{
			int swapper;

			std::cout << "\n-----------------------------------------------------\n";
			std::cout << "Swapping Numbers! ";
			if (num1 > num2)
			{
				std::cout << "Your second number " << num2 << " Is now larger! \n";
				std::cout << "Your first number " << num1 << " Is now smaller! \n";
			}
			else if (num1 > num2)
			{
				std::cout << "Your first number " << num1 << " Is now larger! \n";
				std::cout << "Your second number " << num2 << " Is now smaller! \n";
			}

			

		} // SWAP NUMBERS NEST END -

	}
}
