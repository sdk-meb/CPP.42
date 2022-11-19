/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:22:40 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/19 17:18:29 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Dog.hpp"
# include"Cat.hpp"

int main(){
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    delete j;
    delete i;
    delete meta;

    return 0;
}


