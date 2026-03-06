/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaunito <armaunito@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:26:09 by armosnie          #+#    #+#             */
/*   Updated: 2026/03/06 14:55:50 by armaunito        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _size(n) {

   _tab.reserve(n);
}

Span::~Span() {}

Span::Span(const Span &copy) : _size(copy._size), _tab(copy._tab) {}

Span &Span::operator=(const Span &copy) {
   
   if (this != &copy) {
      _size = copy._size;
      _tab = copy._tab;
   }
   return *this;
}

void  Span::addNumber(int num) {
   
   if (_tab.size() >= _size)
      throw TabIsFull();
   _tab.push_back(num);
}

int Span::shortestSpan() const {
   
   if (_tab.size() <= 1)
      throw NotEnoughInt();
   
   std::vector<int> sortTab = _tab;
   sort(sortTab.begin(), sortTab.end());

   int min = std::numeric_limits<int>::max();
   for (size_t i = 1; i < sortTab.size(); i++) {
      if (min > sortTab[i] - sortTab[i - 1])
         min = sortTab[i] - sortTab[i - 1];
   }
   return min;
}

int Span::longestSpan() const {
   
   if (_tab.size() <= 1)
      throw NotEnoughInt();
   
   std::vector<int> sortTab = _tab;
   sort(sortTab.begin(), sortTab.end());
   return sortTab.back() - sortTab.front();
}