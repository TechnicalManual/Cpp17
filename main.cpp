#include <iostream>
#include <cstdint>

using namespace std;

class Milk {
public:
    virtual ~Milk() {}

    virtual uint64_t get() { return m; }

private:
    uint64_t m;
};

class MilkA : virtual public Milk {
public:
    virtual ~MilkA() {}

    virtual uint64_t get() { return a; }

private:
    uint64_t a;
};

class MilkB : virtual public Milk {
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

#pragma pack(8)
struct T {
    uint8_t a;
    uint32_t b;
    uint64_t d;
    uint16_t c;
};
#pragma pack()

int main() {
    Milk *M = new Milk();
    MilkA A;
    MilkB B;
    MilkC C;
    T t;


    cout << "sizeof(Milk)=" << sizeof(Milk) << endl;
    cout << "sizeof(MilkA)=" << sizeof(MilkA) << endl;
    cout << "sizeof(MilkB)=" << sizeof(MilkB) << endl;
    cout << "sizeof(MilkC)=" << sizeof(MilkC) << endl;
    cout << "sizeof(T)=" << sizeof(T) << endl;


    delete M;
    return 0;
}