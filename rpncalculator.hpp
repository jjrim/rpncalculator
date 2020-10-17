#pragma once


#include "multiplication_operation.hpp"
#include "division_operation.hpp"
#include "addition_operation.hpp"
#include "subtraction_operation.hpp"
#include <stack>

using namespace std;


class Rpn_calculator {
private:
    int result;
    stack<int> stack;

};