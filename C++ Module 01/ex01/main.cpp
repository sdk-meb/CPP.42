#include <Zombie.hpp>

int main()
{
    Zombie* mobs;
    int     N;

    N = 4;

    mobs = zombieHorde(N, "BraizzZ");
    if (mobs)
        delete mobs;
    return 0;
}