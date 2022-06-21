#include <Zombie.hpp>

int main(){
    Zombie zombie;
    Zombie* zmb;

    zmb = newZombie("gogo");
    zmb->announce();
    delete zmb;

    randomChump("pink");
    return 0;
}