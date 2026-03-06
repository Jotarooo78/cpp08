/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaunito <armaunito@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 15:22:36 by armaunito         #+#    #+#             */
/*   Updated: 2026/03/06 15:22:48 by armaunito        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>

int main() {
    try {
        std::cout << "TEST1\n" << std::endl;
        Span sp1(10);
        
        std::vector<int> vec;
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(3);
        vec.push_back(4);
        vec.push_back(5);
        
        sp1.addNumbers(vec.begin(), vec.end());
        std::cout << "Shortest span: " << sp1.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp1.longestSpan() << std::endl;

        std::cout << "\nTEST2\n" << std::endl;

        std::vector<int> vec2;
        Span sp2(10000);
        std::srand(std::time(NULL));
        
        for (int i = 0; i < 10000; ++i) {
            vec2.push_back(rand());
        }
        sp2.addNumbers(vec2.begin(), vec2.end());
        std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp2.longestSpan() << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    
    return 0;
}