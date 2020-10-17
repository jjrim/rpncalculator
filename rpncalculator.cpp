#include <sstream>
#include "rpncalculator.hpp"
#include "operation.hpp"

Operation *RPNcalculator::operation_type(char operation) {
    switch (operation) {
        case Division_operation::DIVISION_CODE: {
            Operation *division = new Division_operation();
            return division;
        }
        case Multiplication_operation::MULTIPLICATION_CODE: {
            Operation *multiplication = new Multiplication_operation();
            return multiplication;
        }
        case Addition_operation::ADDITION_CODE: {
            Operation *addition = new Addition_operation();
            return addition;
        }
        case Subtraction_operation::SUBTRACTION_CODE: {
            Operation *subtraction = new Subtraction_operation();
            return subtraction;
        }
        default:
            return nullptr;
    }

}

void RPNcalculator::perform(Operation *operation) {

    int first, second, result;
    first = stack.top();
    stack.pop();
    second = stack.top();
    stack.pop();
    result = operation->perform(first, second);
    stack.push(result);
}

int RPNcalculator::process_formula(const string &formula) {

}



