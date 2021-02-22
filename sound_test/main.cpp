#include <cstdlib>
#include <iostream>

int add_and_square(int x, int y)
{
    return (x+y) * (x+y);
}

int main()
{
    std::cout << add_and_square(3,4) << std::endl;
    return 0;
}