#include <iostream>
#include <cstdint>
#include "../Milk/Milk.h"

using namespace std;
using namespace Milk;

int main() {
    MilkO *M = new MilkO();
    MilkA A;
    MilkB B;
    MilkC C;
    T t;


    cout << "sizeof(Milk)=" << sizeof(MilkO) << endl;
    cout << "sizeof(MilkA)=" << sizeof(MilkA) << endl;
    cout << "sizeof(MilkB)=" << sizeof(MilkB) << endl;
    cout << "sizeof(MilkC)=" << sizeof(MilkC) << endl;
    cout << "sizeof(T)=" << sizeof(T) << endl;


    delete M;
    return 0;
}