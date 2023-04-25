#include <iostream>

int main(void){
    std::string string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;
    std::cout << "string mem: " << &string << "\n";
    std::cout << "stringPTR mem: " << stringPTR << "\n";
    std::cout << "stringREF mem: " << &stringREF << "\n";

    std::cout << "string: " << string << "\n";
    std::cout << "stringPTR: " << (*stringPTR) << "\n";
    std::cout << "stringREF: " << stringREF << "\n";
    return (0);
}