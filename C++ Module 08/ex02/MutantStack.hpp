/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:41:25 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/28 00:05:20 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTATED_HPP
# define MUTATED_HPP

# include<iostream>
# include<stack>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> , Container::iterator{

    public:
        typedef typename Container::iterator iterator;
        MutantStack ( ){  };
        MutantStack ( const MutantStack& stk){

            this->c = stk.c;
        };
        MutantStack& operator=(const MutantStack& stk){

            this->c = stk.c;
            return *this;
        };
        iterator begin() {

            return this->c.begin();
        }
        iterator end(){

            return this->c.end();
        }
        iterator rbegin(){

            return this->c.rbegin();
        }
        iterator rend(){

            return this->c.rend();
        }  
        ~MutantStack ( ){  };
        
};

# endif
