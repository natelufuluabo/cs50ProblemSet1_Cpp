#include <iostream>

int main(void)
{
    int userInput;

    std::cout << "Enter number: ";

    std::cin >> userInput;

    for (int i = 1; i <= userInput; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            std::cout << "FizzBuzz" << std::endl;
        }
        else if (i % 3 == 0)
        {
            std::cout << "Fizz" << std::endl;
        }
        else if (i % 5 == 0)
        {
            std::cout << "Buzz" << std::endl;
        }
        else
        {
            std::cout << "" << i << std::endl;
        }
    }
}