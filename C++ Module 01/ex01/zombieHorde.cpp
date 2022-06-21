# include<Zombie.hpp>

Zombie* zombieHorde( int N, std::string name ){
    Zombie* mobs; /* Groups of zombies, known as mobs, swarms, drags, appetites or plagues */

    if (N < 1)
        return NULL;
    mobs = new Zombie[N + 1];
    do
    {
        mobs[N].Zombieset(name);
        mobs[N].announce();
    } while(--N);

    return mobs;
}