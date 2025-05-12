#include <iostream>
#include <limits>

int main() {
    std::cout << "Minimum and maximum values of different integer types:\n";

    std::cout << "int: " << std::numeric_limits<int>::min() << " to "
        << std::numeric_limits<int>::max() << '\n';

    std::cout << "short: " << std::numeric_limits<short>::min() << " to "
        << std::numeric_limits<short>::max() << '\n';

    std::cout << "long: " << std::numeric_limits<long>::min() << " to "
        << std::numeric_limits<long>::max() << '\n';

    std::cout << "long long: " << std::numeric_limits<long long>::min() << " to "
        << std::numeric_limits<long long>::max() << '\n';

    return 0;
}
