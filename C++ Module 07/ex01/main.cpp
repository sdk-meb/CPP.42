/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:08:40 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/26 21:28:09 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"iter.hpp"
# include<cmath>

class awe{
    int n;
    public:
    awe():n(42){};

    int getn() const {return n;};
};

std::ostream& operator<<(std::ostream& os, const awe &a){return (os << a.getn());};
template <typename T>
void print(T const &a)
{
    std::cout << a << std::endl;
}

int main( void ) {
    
    {
       int array[] = {1,2,3,6,-2,-5,78};
        awe arr[5];
        iter(array, 5, print);
        iter(arr, 5, print);
    }

    return 0;
}
