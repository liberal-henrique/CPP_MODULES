#include "BitcoinExchange.hpp"

void get_input_return_line(std::string fileName) {
	std::ifstream inputFile(fileName.c_str(), std::ifstream::in);
	if (!inputFile) {
		inputFile.close();
		std::cout << "Error opening file." << std::endl;
		return ;
	}
	std::string line;
	std::getline(inputFile, line);
	while (std::getline(inputFile, line)) {
		parsing_data(line);
	}
	inputFile.close();
	return ;
}

int		parsing_data(std::string line) {
	size_t	pos = line.find('|');
	std::string amount;
	if (pos != std::string::npos) {
		std::cout << line << std::endl;
		amount.assign(line, (pos + 1), (line.size() - 1));
		check_amount(atol(amount.c_str()));
	}
	else
		std::cerr << "Something Wrong in the format." << std::endl;
	return (0);
}

int		check_amount(long int amount) {
	float result = 0;
	if (amount < 0) {
		std::cerr << "Error: not a positive number." << std::endl;
		return (-1);
	}
	else if (amount > INT_MAX) {
		std::cerr << "Error: too large a number." << std::endl;
		return (-1);
	}
	else
		result = static_cast<float>(amount);
	return (result);
}
