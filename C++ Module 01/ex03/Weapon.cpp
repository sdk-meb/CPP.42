# include<Weapon.hpp>


void   Weapon::setType(std::string type){
    this->type = type;
}

std::string&   Weapon::getType(){
    std::string& REF(this->type);

    return REF;
}