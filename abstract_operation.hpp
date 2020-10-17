#pragma once

#include "operation.hpp"

class Abstract_operation : public Operation {
private:
    char operation_type;

public:
    explicit Abstract_operation(char operation) { operation_type = operation; }

    char get_code() override { return operation_type; }

    ~Abstract_operation() override = default;
};