/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:11:58 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/27 22:05:10 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Span.hpp"


Span::Span( uint n ):N(n){

    VInt.reserve(N);
}
Span::Span( const Span& span):N(span.getN()){

    if (VInt != span.getVInt())
        VInt = span.getVInt();
}
Span& Span::operator=( const Span& span){

    if (VInt != span.getVInt())
        VInt = span.getVInt();

    return *this;
}

void    Span::addNumber(uint ui) {

    if (VInt.size() < N){
 
        VInt.push_back(ui);
        std::sort(VInt.begin(), VInt.end());
    }
    else
        throw   std::runtime_error("[ Span is full ]");
}

void    Span::addNumbers( Span::uter _pos, Span::uter ultimate) {

    for (uter it = _pos ; it < ultimate ; it++)
        addNumber(*it);
}

uint   Span::shortestSpan(){

    uint dis = UINT_MAX;

    if (VInt.size() < 2)
        throw std::runtime_error(" shortestSpan need at least two stored elements !?");
    for( uint idx = 0; idx + 1 < VInt.size(); idx++)
        if(dis > VInt[idx + 1] - VInt[idx] )
            dis = VInt[idx + 1] - VInt[idx];
    
    return dis;
}
uint   Span::longestSpan(){

    if (VInt.size() < 2)
        throw std::runtime_error(" longestSpan need at least two stored elements !?");
    return (VInt.back() - VInt.front());
}

uint  Span::getN() const {

    return N;
}
std::vector<uint> Span::getVInt() const {
    
    return VInt;
}
Span::~Span(){

}
