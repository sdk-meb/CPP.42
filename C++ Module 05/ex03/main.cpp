/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:21:58 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/23 14:25:54 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include"Bureaucrat.hpp"
# include"PresidentialPardonForm.hpp"
# include"ShrubberyCreationForm.hpp"
# include"RobotomyRequestForm.hpp"
# include"Intern.hpp"

bool tts;

void    out_test(){

    static int c;

    c++;
    if (tts == true)    
        std::cout << "\033[1;32m try " << c << " work likely!  \033[0m\n";
    else
        std::cout << "\033[1;31m try " << c << " catch exceptin \033[0m\n";
}

int main(){

    Intern intern;
    AForm*   form;
    
    try{
        Bureaucrat bur("meb", 25);

        try{    
            form = intern.makeForm ("presidential pardon", "pres");// s(25), e(5)

            form->beSigned(bur);
            while (bur.getGrade() >= 5)
                bur.incrementGrade();

            bur.executeForm(*form);

                                                                        tts = true;}
        catch(const std::exception& e){std::cerr << e.what() << '\n';   tts = false;}
                                                                        out_test();delete form;

        try{
            form = intern.makeForm ("robotomy request", "robo");// s(72), e(45)

            form->beSigned(bur);
            while (bur.getGrade() >= 5)
                bur.incrementGrade();
            bur.executeForm(*form);   

                                                                    tts = true;}
        catch(const std::exception& e){std::cerr << e.what() << '\n';   tts = false;}
                                                                    out_test();delete form;

        try{
            form = intern.makeForm ("shrubbery creation", "shru");// s(145), e(137)

            form->beSigned(bur);
            while (bur.getGrade() >= 5)
                bur.incrementGrade();

            bur.executeForm(*form);

                                                                    tts = true;}
        catch(const std::exception& e){std::cerr << e.what() << '\n';   tts = false;}
                                                                    out_test();delete form;
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }

    return 0;
}
