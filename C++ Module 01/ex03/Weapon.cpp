# include<Weapon.hpp>

Weapon::Weapon(std::string type):Type(type){

}

void   Weapon::setType(std::string type){

    Type = type;
}

const std::string&   Weapon::getType(){

    const std::string& REF(Type);

    return REF;
}