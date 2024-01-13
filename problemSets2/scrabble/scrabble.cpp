#include <iostream>
#include <string>
#include <cctype>

int calculateScore(std::string input);

int main(void)
{
    std::string inputs[2];
    int scores[2];
    for (int i = 0; i < 2; i++)
    {
        std::cout << "Player" << i+1 << ": ";
        std::getline(std::cin, inputs[i]);
        scores[i] = calculateScore(inputs[i]);
    }
    if (scores[0] > scores[1])
    {
        std::cout << "Player 1 wins!" << std::endl;
        return 0;
    }
    else if (scores[0] < scores[1])
    {
        std::cout << "Player 2 wins!" << std::endl;
        return 0;
    }
    else
    {
        std::cout << "Ties!" << std::endl;
        return 0;
    }
}

int calculateScore(std::string input)
{
    int sum = 0;
    int inputLength = input.length();
    char letters[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    int points[] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 };
    
    for (int i = 0; i < inputLength; i++)
    {
        if (std::tolower(input[i]) >= 97 && std::tolower(input[i]) <= 122)
        {
            for (int j = 0; j < 26; j++)
            {
                if (std::tolower(input[i]) == letters[j])
                {
                    sum += points[j];
                    break;
                }
            }
        }
    }
    return sum;
}