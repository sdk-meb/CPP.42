#include <Zombie.hpp>

int main()
{
    Zombie* mobs;
    std::string name = "gogo";
    int     N;

    N = 4;

    mobs = zombieHorde(N, name);
    if (mobs)
        delete[] mobs;
    return 0;
}