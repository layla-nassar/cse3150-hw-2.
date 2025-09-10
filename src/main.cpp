#include <iostream>
#include <string>
#include "greeting_utils.h"

int main() {
    std::cout << "Enter your name: ";

    std::string name;
    if (!std::getline(std::cin, name)) {
        return 0; // if no input, exit quietly
    }

    std::string msg = GreetingUtils::create_message(name);
    char* c_msg = GreetingUtils::format_as_c_string(msg);

    std::cout << c_msg << '\n';

    delete[] c_msg; // free heap memory

    return 0;
}
