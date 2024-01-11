#include <iostream>
#include <string>

int main() {
    // Declare a string to store the input
    std::string userInput;

    // Prompt the user to enter text
    std::cout << "What is your name?" << std::endl;
    
    // Read the input from the user
    std::getline(std::cin, userInput);

    // Output the entered text
    std::cout << "Hello, " << userInput << "!" << std::endl;

    return 0;
}
