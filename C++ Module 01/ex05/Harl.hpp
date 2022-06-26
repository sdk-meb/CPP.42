#ifndef _HARL_H_
# define _HARL_H_

# include<iostream>


class Harl{

    std::string DEBUGm;
    std::string INFOm;
    std::string WARNINGm;
    std::string ERRORm;
    enum comments {eDEBUG, eINFO, eWARNING, eERROR};

public:
    Harl();
    void debug   ( void );
    void info    ( void );
    void warning ( void );
    void error   ( void );
    void complain( std::string level );
};

# endif