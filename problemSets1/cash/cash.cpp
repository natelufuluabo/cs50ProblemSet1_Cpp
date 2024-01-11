#include <iostream>

int main(void)
{
    int change;
    int counter = 0;

    do
    {
        std::cout << "Change owed: ";
        std::cin >> change;
    } while (change < 0);
    
    if (change == 0) {
        std::cout << counter << std::endl;
        return 0;
    } 
    else 
    {
        while (change > 0)
        {
            while (change - 25 >= 0)
            {
                change -= 25;
                counter++;
            }
            while (change - 10 >= 0)
            {
                change -= 10;
                counter++;
            }
            while (change - 5 >= 0)
            {
                change -= 5;
                counter++;
            }
            while (change - 1 >= 0)
            {
                change -= 1;
                counter++;
            }
        }
        std::cout << counter << std::endl;
        return 0;
    }
}