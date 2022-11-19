/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdk-meb <sdk-meb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:22:40 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/19 18:02:15 by sdk-meb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Dog.hpp"
# include"Cat.hpp"

int main(){

    const Animal* stockyard[5] = { new Dog(),  new Dog(),  new Dog(),  new Cat(),  new Cat() };

    
    stockyard[0]->makeSound();
     stockyard[1]->makeSound();
      stockyard[2]->makeSound();
       stockyard[3]->makeSound();
        stockyard[4]->makeSound();
    
    delete stockyard[0];
        delete stockyard[1];
    delete stockyard[2];
      delete stockyard[3];
    delete stockyard[4];
    
    return 0;
}
