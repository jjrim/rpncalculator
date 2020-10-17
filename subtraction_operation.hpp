#pragma once

#include "abstract_operation.hpp"

class Subtraction_operation : public Abstract_operation {
public:
    const static char SUBTRACTION_CODE = '-';

    Subtraction_operation() : Abstract_operation(SUBTRACTION_CODE) {};

    int perform(int first, int second) override { return first - second; }

    ~Subtraction_operation() override = default;

};