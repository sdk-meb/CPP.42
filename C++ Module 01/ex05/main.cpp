# include<Harl.hpp>

int main(){
    void (Harl::* Cfptr) (std::string) = &Harl::complain;

    Harl _harl;

    (_harl.*Cfptr) ("ERROR");

    return 0;
}
