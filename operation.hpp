#pragma once

class Operation{
public:
    virtual char get_code() = 0;

    virtual int perform(int first, int second) = 0;

    virtual ~Operation() = default;
};

