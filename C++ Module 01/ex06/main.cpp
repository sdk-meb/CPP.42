# include<Harl.hpp>

int main(int argc, char** argv){

    if (argc != 2)
        return 1;
    void (Harl::* Cfptr) (std::string) = &Harl::complain;
    Harl _harl;

    (_harl.* Cfptr) (argv[1]);

    return 0;
}
