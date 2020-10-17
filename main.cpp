#include <iostream>
#include "rpncalculator.hpp"

int main() {
    std::cout << "Enter your formula:\n";
    std::string formula;
    std::getline(std::cin, formula);
    std::cout << "You entered " << formula << std::endl;
    Rpn_calculator calculator;
    int result = calculator.process_formula(formula);
    std::cout << "The result is:\n";
    std::cout << result << std::endl;
    return 0;
}
