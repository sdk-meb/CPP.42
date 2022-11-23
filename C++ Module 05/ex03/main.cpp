/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 08:21:58 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/23 12:39:09 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include"Bureaucrat.hpp"
# include"PresidentialPardonForm.hpp"
# include"ShrubberyCreationForm.hpp"
# include"RobotomyRequestForm.hpp"

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


    try{    
        Bureaucrat bur("meb", 25);
        PresidentialPardonForm   form("lloi");// s(25), e(5)
        form.beSigned(bur);
        while (bur.getGrade() >= 5)
            bur.incrementGrade();

        bur.executeForm(form);
        
        
                                                                            tts = true;}
    catch(const std::exception& e){std::cerr << e.what() << '\n';  /****/   tts = false;}
                                                                            out_test();
    try{    
        Bureaucrat bur("meb", 73);
        RobotomyRequestForm   form("lloi");// s(72), e(45)
        form.beSigned(bur);
        while (bur.getGrade() >= 5)
            bur.incrementGrade();

        bur.executeForm(form);
        
        
                                                                            tts = true;}
    catch(const std::exception& e){std::cerr << e.what() << '\n';  /****/   tts = false;}
                                                                            out_test();
    try{    
        Bureaucrat bur("meb", 130);
        ShrubberyCreationForm   form("lloi");// s(145), e(137)
        form.beSigned(bur);
        while (bur.getGrade() >= 5)
            bur.incrementGrade();

        bur.executeForm(form);
        
        
                                                                            tts = true;}
    catch(const std::exception& e){std::cerr << e.what() << '\n';  /****/   tts = false;}
                                                                            out_test();

    return 0;
}
