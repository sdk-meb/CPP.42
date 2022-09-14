#include <Zombie.hpp>

int main()
{
    Zombie* mobs;
    std::string name("gogo");
    int     N(4);

    mobs = zombieHorde(N, name);

   delete[] mobs;

    return 0;
}