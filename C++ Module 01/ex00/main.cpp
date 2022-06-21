#include <Zombie.hpp>

int main(){
    Zombie zombie;
    Zombie* zmb;

    zmb = zombie.newZombie("gogo");
    zmb->announce();
    delete zmb;

    zombie.randomChump("he");
    return 0;
}