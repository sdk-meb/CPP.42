# include<Weapon.hpp>

Weapon::Weapon(std::string type):type(type){

}

void   Weapon::setType(std::string type){

    this->type = type;
}

const std::string&   Weapon::getType(){

    const std::string& REF(this->type);

    return REF;
}