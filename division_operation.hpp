#pragma once

#include "abstract_operation.hpp"

class Division_operation : public Abstract_operation {
public:
    const static char DIVISION_CODE = '/';

    Division_operation() : Abstract_operation(DIVISION_CODE) {};

    int perform(int a, int b) override { return a / b; }

    ~Division_operation() override = default;

};