
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include<iostream>
# include<ostream>

class Bureaucrat{

    const std::string   Name;
    short   Grade; 

    public:
        Bureaucrat(/* args */);
        const std::string getName() const;
        short       getGrade() const;
        std::ostream& operator<<( std::ostream out) const;
        void    GradeTooHighException();
        void    GradeTooLowException();
        ~Bureaucrat();
};




# endif
