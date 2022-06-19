#include <iostream>

int main();

char ch;

int main() {
    std::cout << "Enter a character: ";
    std::cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch>= 'A' && ch <= 'Z')) { 
        if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ) {
            std::cout << "The character is a vowel." << std::endl;
        } else {
            std::cout << "The character is a constonant." << std::endl;
        }
    } else if ( ch >= 0 && ch <= 9 ){
        std::cout << "The character is a digit." << std::endl;
    } else {
        std::cout << "The character is a symbol." << std::endl;
    }

}
