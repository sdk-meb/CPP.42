# include<Harl.hpp>

/**************************____ CONSTRUCTOR ____*******************************/
Harl::Harl(){

    DEBUGm = "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" ;

    INFOm = "I cannot believe adding extra bacon costs more money. You didn ’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" ;

    WARNINGm = "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." ;

    ERRORm = "This is unacceptable! I want to speak to the manager now." ;

}
/**************************__ members function __******************************/

void Harl::debug   ( void ){
    std::cout << DEBUGm << std::endl;
}

void Harl::info    ( void ){
    std::cout << INFOm << std::endl;
}

void Harl::warning ( void ){
    std::cout << WARNINGm << std::endl;
}

void Harl::error   ( void ){
    std::cout << ERRORm << std::endl;
}

int getlevel(std::string level)
{
    std::string lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 4;

    do{
        switch ((level == lvls[i]) + i - i)
        {
            case true:
                return (i + 1);
            default:
                break;
        }

    }   while (i--);

    return (0);
}

void Harl::complain( std::string level ){

     // declare pointers for data member
    const comments msg = eDEBUG;
    std::cout  <<  "_____\n";
    // void (*Dfptr) (void) = &Harl::debug;
    // void (*Ifptr) (void) = &Harl::info;
    // void (*Wfptr) (void) = &Harl::warning;
    // void (*Efptr) (void) = &Harl::error;

    switch (getlevel( level ))
    {
        case msg:
           // Dfptr();
            break;
        case msg + 1:
            info();
            break;
        case msg + 2:
            warning();
            break;
        case msg + 3:
            error();
            break;
        default:
            break;
    };

}