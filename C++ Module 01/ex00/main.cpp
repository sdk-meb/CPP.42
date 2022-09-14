#include <Zombie.hpp>

int main(){

    Zombie* zmb;


    zmb = newZombie("gogo");
    zmb->announce();

    randomChump("pink");
    
    delete zmb;

    return 0;
}
