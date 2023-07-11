/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliberal <lliberal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:25:20 by lliberal          #+#    #+#             */
/*   Updated: 2023/06/27 15:33:28 by lliberal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>
#include <string>
#include <cstring>
using namespace std;

int	main(int ac, char **av)
{
	if (ac < 2)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	for (int j = 1; av[j]; j++)
	{
		for (int i = 0; i < strlen(av[j]); i++)
			cout << (char)toupper(av[j][i]);
	}
	cout << endl;
	return (0);
}
