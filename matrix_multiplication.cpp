#include <iostream> 
//

int main();
double a;
double b;
double c;
double d;
double e;
double f;
double g;
double h;

double m1_1; //ae+bg
double m1_2; //af + bh
double m2_1; //ce + dg
double m2_2; //cf + dh

int main() {
    std::cout<< "Enter a: "; 
    std::cin >> a;

    std::cout << "Enter b: ";
    std::cin >> b;

    std::cout << "Enter c: ";
    std::cin >> c;

    std::cout << "Enter d: ";
    std::cin >> d;

    std::cout<< "Enter e: "; 
    std::cin >> e;

    std::cout << "Enter f: ";
    std::cin >> f;

    std::cout << "Enter g: ";
    std::cin >> g;

    std::cout << "Enter h: ";
    std::cin >> h;

    m1_1 = (a*e) + (b*g);
    m1_2 = (a*f) + (b*h);
    m2_1 = (c*e) + (d*g);
    m2_2 = (c*f) + (d*h);

    std:: cout << m1_1 << std::endl;
    std:: cout << m1_2 << std::endl;
    std:: cout << m2_1 << std::endl;
    std:: cout << m2_2 << std::endl;

}