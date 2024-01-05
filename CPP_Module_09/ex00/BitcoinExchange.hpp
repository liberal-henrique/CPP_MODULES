#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <limits>

class BitcoinExchange {

};

void	get_input_return_line(std::string fileName);
int		parsing_data(std::string line);
int		check_amount(long int amount);

#endif
