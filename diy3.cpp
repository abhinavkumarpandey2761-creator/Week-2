#include <iostream>


inline int minVal(int a, int b) {
    return (a < b) ? a : b;
}


inline int minVal(int a, int b, int c) {
    return minVal(minVal(a, b), c);
}

int main() {
    int x = 15, y = 25, z = 5;

   
    std::cout << "Min of " << x << " and " << y << " is: " << minVal(x, y) << "\n";

   
    std::cout << "Min of " << x << ", " << y << ", and " << z << " is: " << minVal(x, y, z) << "\n";

    return 0;
}
