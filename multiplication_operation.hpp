#pragma once

#include "abstract_operation.hpp"

class Multiplication_operation : public Abstract_operation {
public:
    const static char MULTIPLICATION_CODE = '*';

    Multiplication_operation() : Abstract_operation(MULTIPLICATION_CODE) {};

    int perform(int a, int b) override { return a * b; }

    ~Multiplication_operation() override = default;

};