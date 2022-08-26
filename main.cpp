#include <iostream>

void function1() {
    for (int i = 0; i < 200; i++) {
        std::cout << "+";
    }
}

void function2() {
    for (int i = 0; i < 200; i++) {
        std::cout << "-";
    }
}


int main() {
    function1();
    function2();
    return 0;
}
