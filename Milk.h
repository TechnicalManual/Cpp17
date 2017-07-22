//
// Created by mind on 17-7-22.
//

#ifndef CPP17_MILK_H
#define CPP17_MILK_H


#include <cstdint>

namespace Milk {

class MilkO {
public:
    virtual ~MilkO() {}

    virtual uint64_t get() { return m; }

private:
    uint64_t m;
};

class MilkA : virtual public MilkO {
public:
    virtual ~MilkA() {}

    virtual uint64_t get() { return a; }

private:
    uint64_t a;
};

class MilkB : virtual public MilkO {
public:
    virtual ~MilkB() {}

    virtual uint64_t get() { return b; }

private:
    uint64_t b;
};

class MilkC : public MilkA, public MilkB {
public:
    virtual ~MilkC() {}

    virtual uint64_t get() { return c; }

private:
    uint64_t c;
};

struct T {
    uint8_t a;
    uint32_t b;
    uint64_t d;
    uint16_t c;
};

} // namespace Milk
#endif //CPP17_MILK_H
