/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:08:40 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/26 21:14:40 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Whatever.hpp"

class awe{
    int n;
    public:
    awe():n(0){};
    awe( int m):n(m){}
    awe& operator=(awe& a){ n = a.getn(); return *this;};
    bool operator>(awe& a){  return this->n > a.getn();};
    bool operator<(awe& a){ return this->n < a.getn();};
    int getn() const {return n;};
};

std::ostream& operator<<(std::ostream& os, const awe &a){return (os << a.getn());};

int main( void ) {
    awe a = 2;
    awe b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}
