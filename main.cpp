#include <iostream>
using namespace  std;
#include "DateMac.h"

int main() {

    Date a, b;

    a.fillDate();
    cout << "----------------------\n\n";
    a.printDate();

    b.getNowDate();
    b.printDate();

    return 0;
}