#pragma once

#include "abstract_operation.hpp"

class Division_operation : public Abstract_operation {
public:
    const static char DIVISION_CODE = '/';

    Division_operation() : Abstract_operation(DIVISION_CODE) {};

    int perform(int first, int second) override { return first / second; }

    ~Division_operation() override = default;

};