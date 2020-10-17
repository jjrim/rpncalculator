#pragma once

#include "abstract_operation.hpp"

class Multiplication_operation : public Abstract_operation {
public:
    const static char MULTIPLICATION_CODE = '*';

    Multiplication_operation() : Abstract_operation(MULTIPLICATION_CODE) {};

    int perform(int first, int second) override { return first * second; }

    ~Multiplication_operation() override = default;

};