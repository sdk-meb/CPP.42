/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ident.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:00:43 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/26 08:59:17 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Ident.hpp"

Base * generate( ){
 
    srand( time(NULL) );

    switch (rand() % 3){
    
        case 0:
            return dynamic_cast <Base *> (new C);
        case 1:
            return dynamic_cast <Base *> (new B);
        case 2:
            return dynamic_cast <Base *> (new A);
    };
    return dynamic_cast <Base *> (new A);
}

void identify(Base* p){
    
    char    Tder;

    {
        A* a = dynamic_cast<A*>(p);
        if (a == NULL){
            B* b = dynamic_cast<B*>(p);
            if (b == NULL){
                C* c = dynamic_cast<C*>(p);
                if (c == NULL)
                    Tder = '%';
                else
                    Tder = 'C';
            }
            else
                Tder = 'B'; 
        }
        else
            Tder = 'A';
    }
    std::cout <<  Tder << "\n";
}

void identify(Base& p){

    try
    {
        A a = dynamic_cast <A& > (p);
        std::cout << "A\n";
        (void)a;
    }
    catch(const std::exception& e)
    {
        try
        {
            B b = dynamic_cast <B& > (p);
            (void)b;
            std::cout << "B\n";
        }
        catch(const std::exception& e)
        {
            try
            {
                C c = dynamic_cast <C& > (p);
                (void)c;
                std::cout << "C\n";
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
            
        }
    }
}
