#include <iostream>

int main(void)
{
    int height;

    std::cout << "Height: ";

    std::cin >> height;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height; j++)
        {
            if (height - j <= i + 1)
            {
                std::cout << "#";
            } 
            else 
            {
                std::cout << " ";
            }
        }
        std::cout << "  ";
        for (int j = 0; j < height; j++)
        {
            if (j <= i)
            {
                std::cout << "#";
            } 
            else 
            {
                std::cout << " ";
            }
        }
        std::cout << "" << std::endl;
    }
}