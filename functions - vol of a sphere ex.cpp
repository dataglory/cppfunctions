/*program that prompts the user for the radius of a sphere,
 *and calculates  and prints the volume of that sphere.
 *Used inline function sphereVolume that returns the result of the following expression:
 *(4.0 / 3.0 * 3.14159 * pow(radius, 3)).
 */

#include <iostream>
#include <cmath>
using namespace std;

//inline function to calculate the volume of a sphere
inline double sphereVolume(double get_radius) {
    return get_radius = (4.0/3.0) * 3.14159 * pow(radius, 3);
}

int main() {
    double radius;

    cout << "Enter the radius of a sphere: " << endl;
    cin >> radius;

    double volume;
    volume = sphereVolume(radius);
    cout << "Volumen of sphere is: " << volume << endl;

    return 0;
}

// Created by Talal on 19-Jul-25.