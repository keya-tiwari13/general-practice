#include <iostream>

int main();

double a{};
double b{};
double c{};
double d{};
double determinant{};

int main () {
    std::cout<< "Enter a: "; 
    std::cin >> a;

    std::cout << "Enter b: ";
    std::cin >> b;

    std::cout << "Enter c: ";
    std::cin >> c;

    std::cout << "Enter d: ";
    std::cin >> d;

    // matrix determinant = ad-bc

    determinant = (a*d) - (b*c);

    std::cout << "The determinant is " << determinant << std::endl;

}