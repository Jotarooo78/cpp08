/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armosnie <armosnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:34:43 by armosnie          #+#    #+#             */
/*   Updated: 2026/03/05 14:42:39 by armosnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <cstdlib>

int main(int argc, char **argv) {

    if (argc > 2) {
        std::vector<int> tab;
        int target = atoi(argv[argc - 1]);
        
        
        for (int i = 1; i < argc - 1; i++) {
            tab.push_back(atoi(argv[i]));
        }
        try {
            std::vector<int>::iterator it = easyfind(tab, target);
            std::cout << "number " << *it << " found !" << std::endl;
        }
        catch (const std::exception &e) {
            std::cout << "Error : " << e.what() << std::endl;
        }
    }
    return 0;
}