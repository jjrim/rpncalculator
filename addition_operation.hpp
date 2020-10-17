#pragma once

#include "abstract_operation.hpp"

class Addition_operation : public Abstract_operation {
public:
    const static char ADDITION_CODE = '+';

    Addition_operation() : Abstract_operation(ADDITION_CODE) {};

    int perform(int first, int second) override  { return first + second; }

    ~Addition_operation() override = default;

};