/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:22:40 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/19 19:39:36 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Dog.hpp"
# include"Cat.hpp"

int main(){
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat;

    
    const WrongAnimal* Wmeta = new WrongAnimal();
    const WrongAnimal* Wi = new WrongCat;


    std::cout << Wi->getType() + ": ";
        Wi->makeSound();

    std::cout << Wmeta->getType() + ": ";
        Wmeta->makeSound();

    delete Wi;
    delete Wmeta;


     std::cout << j->getType() + ": ";
        j->makeSound();

    std::cout << i->getType() + ": ";
        i->makeSound();
        
    std::cout << meta->getType() + ": ";
        meta->makeSound();
        
    delete j;
    delete i;
    delete meta;

    return 0;
}


