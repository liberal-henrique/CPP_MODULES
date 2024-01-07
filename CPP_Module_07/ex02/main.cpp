/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 08:53:51 by lliberal          #+#    #+#             */
/*   Updated: 2024/01/06 17:32:27 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

// int main(void) {
// 	Array<int>  liberal(94);

// 	try {
// 		std::cout << liberal[10] << std::endl;
// 	}
// 	catch(std::exception &e) {
// 		std::cout << e.what() << std::endl;
// 	}
// }

int main()
{
    Array<const char*> des(5);
    for (size_t z = 0; z < des.size(); ++z) {
        des[z] = "as";
        std::cout << des[z] << std::endl;
    }

    Array<int> data(3);
    Array<int> myArray(5);
    
    for (size_t i = 0; i < myArray.size(); ++i) {
        myArray[i] = i * i;
    }

    for (size_t f = 0; f < myArray.size(); ++f) {
        std::cout << "myArray[" << f << "] = " << myArray[f] << std::endl;
    }
    data = Array<int>(myArray);
    for (size_t j = 0; j < data.size(); ++j) {
        std::cout << "data[" << j << "] = " << data[j] << std::endl;
    }

    Array<std::string> data2(8);
    Array<std::string> myArray2(5);
    
    std::string a = "a";
    for (size_t k = 0; k < myArray2.size(); ++k) {
        myArray2[k] = a + 's';
    }

    for (size_t v = 0; v < myArray2.size(); ++v) {
        std::cout << "myArray2[" << v << "] = " << myArray2[v] << std::endl;
    }
    data2 = myArray2;
    for (size_t q = 0; q < data2.size(); ++q) {
        std::cout << "data2[" << q << "] = " << data2[q] << std::endl;
    }
    return 0;
}


// #include <iostream>
// #include "Array.hpp"

// #define MAX_VAL 750
// int main(int ac, char**av)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }
