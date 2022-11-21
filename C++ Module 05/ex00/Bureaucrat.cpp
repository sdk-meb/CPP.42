# include"Bureaucrat.hpp"



Bureaucrat::Bureaucrat(/* args */){

}
std::ostream& Bureaucrat::operator<<( std::ostream out) const{

    return out << Name << ", bureaucrat grade " << Grade;
}
const std::string   Bureaucrat::getName() const{

    return Name;
}
short   Bureaucrat::getGrade() const{

    return Grade;
}
void    Bureaucrat::GradeTooHighException(){

    if (Grade > 1)
        Grade -= 1;
    /* else exeption */
}
void    Bureaucrat::GradeTooLowException(){

    if (Grade < 150)
        Grade += 1;
    /* else exeption */
}

Bureaucrat::~Bureaucrat(){

}
