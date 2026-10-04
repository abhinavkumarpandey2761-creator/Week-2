#include <iostream>
#include <cmath> 


double volume(double side) {
    return side * side * side;
}


double volume(double length, double width, double height) {
    return length * width * height;
}


double volume(double radius, double height) {
    return M_PI * radius * radius * height;
}

int main() {
 
    double cubeVolume = volume(5.0);
    double cuboidVolume = volume(4.0, 5.0, 6.0);
    double cylinderVolume = volume(3.0, 7.0);

    std::cout << "Volume of Cube: " << cubeVolume << " cubic units\n";
    std::cout << "Volume of Cuboid: " << cuboidVolume << " cubic units\n";
    std::cout << "Volume of Cylinder: " << cylinderVolume << " cubic units\n";

    return 0;
}
