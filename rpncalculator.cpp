#include <sstream>
#include "rpncalculator.hpp"

Operation *Rpn_calculator::operation_type(char operation) {
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

void Rpn_calculator::perform(Operation *operation) {

    int first, second, P_result;
    first = stack.top();
    stack.pop();
    second = stack.top();
    stack.pop();
    P_result = operation->perform(first, second);
    stack.push(P_result);
}

int Rpn_calculator::process_formula(const string &formula) {
    istringstream iss, iss2;
    iss = istringstream(formula);
    string operand;
    while(!iss.eof()) {
        iss >> operand;
        iss2 = istringstream(operand);
        if (iss2 >> result) {
            stack.push(result);
        }
        else {
            perform(operation_type(operand[0]));

        }
    }
    return stack.top();
}



