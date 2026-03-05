/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armosnie <armosnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:34:43 by armosnie          #+#    #+#             */
/*   Updated: 2026/03/05 14:49:15 by armosnie         ###   ########.fr       */
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

/* test : 
./EasyFind 56 98 49 55 100 77 30 33 53 19 5 18 32 91 9 65 73 22 2 67 34 94 4 39 93 54 62 87 29 27 59 71 36 1 86 80 57 95 85 64 48 97 46 51 61 60 76 92 23 68 26 12 40 78 41 6 45 58 82 69 35 88 21 89 3 8 70 79 99 63 7 13 20 47 24 15 42 43 25 96 28 44 75 90 38 10 66 81 31 72 83 14 84 37 50 74 16 11 52 17 101*/