#include <iostream>
#include <string>
#include <cctype>

std::string checkUserInput(long input);

int main(void)
{
    long input;
    std::cout << "Number: ";
    std::cin >> input;

    std::string verifiedInput = checkUserInput(input);
    std::string numberString = std::to_string(input);

    if (verifiedInput == "INVALID") 
    {
        std::cout << verifiedInput << std::endl;
        return 0;
    }

    int sumWithMultiplication = 0;
    int sumWithoutMultiplication = 0;

    for (std::size_t i = 0; i < numberString.length(); ++i)
    {
        int digit = std::stoi(std::string(1, numberString[i]));
        if (i % 2 != 0)
        {
            sumWithoutMultiplication += digit;
        }
        else
        {
            int product = digit * 2;
            std::string productString = std::to_string(product);
            if (productString.length() > 1)
            {
                for (std::size_t j = 0; j < productString.length(); ++j)
                {
                    int digit = std::stoi(std::string(1, productString[j]));
                    sumWithMultiplication += digit;
                }
            } 
            else
            {
                sumWithMultiplication += product;
            } 
        }
    }
    if ((sumWithMultiplication + sumWithoutMultiplication) % 10 != 0)
    {
        std::cout << "INVALID" << std::endl;
        return 0;
    }

    std::cout << verifiedInput << std::endl;
    return 0;
}

std::string checkUserInput(long input)
{
    std::string numberString = std::to_string(input);
    char firstDigit = numberString[0];
    if (!std::isdigit(static_cast<char>(firstDigit)))
    {
        return "INVALID";
    }
    else if (numberString.length() < 13 || numberString.length() > 16)
    {
        return "INVALID";
    }
    else
    {
        switch (firstDigit)
        {
        case '2':
            return "MASTERCARD";
        case '3':
            return "AMEX";
        case '4':
            return "VISA";
        case '5':
            return "MASTERCARD";
        default:
            return "INVALID";
        }
    }
}