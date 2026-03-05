#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <iostream>
#include <vector>
#include <iterator>

template <typename T>
class Span {

    private : 
        unsigned int _size;
        std::vector<int> _tab;

    public :

        Span(unsigned int n) : _size(n) {
            
        }
        ~Span();
        Span(const Span &copy);
        Span &operator=(const Span &copy);

        void addNumbers(int num);
        int shortestSpan() const;
        int longestSpan() const;


    class SpanNumberError : public std::exception {
        public :
            virtual const *what() const throw() {
                return "Error with the arguments";
            }
    };
} ;


#endif