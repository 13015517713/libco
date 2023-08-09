#include <time.h>
#include <iostream>

void test(const uint64_t &val) {
    std::cout << val << std::endl;
}

int main() {
    test((uint64_t)time(NULL));
}