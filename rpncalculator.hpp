#pragma once


#include "multiplication_operation.hpp"
#include "division_operation.hpp"
#include "addition_operation.hpp"
#include "subtraction_operation.hpp"
#include <stack>

using namespace std;


class RPNcalculator {
private:
    int result{};
    static stack<int> stack;

    static Operation *operation_type(char operation);

    static void perform(Operation *operation);


public:
    RPNcalculator() = default;

    int process_formula(const string &formula);

};
