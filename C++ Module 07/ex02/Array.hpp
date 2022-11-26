/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <mes-sadk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:41:25 by mes-sadk          #+#    #+#             */
/*   Updated: 2022/11/26 20:59:50 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include<iostream>

template <class T>
class Array{

        T*       Element;
        uint    Size;
    public:
        Array(): Size(0){ Element = new T[0]; };

        ~Array(){
            try{
                delete [] Element;
            }
            catch(std::exception& exc){};
        };

        Array(uint const n):Element(new T[n]),Size(n){

            for (size_t idx = 0; idx < Size; idx++)
                std::cout <<  Element[idx] << ", ";
            std::cout << std::endl;
        };

        Array(const Array& array):Size(array.size()){

            Element = new T[Size];
            for (size_t idx = 0; idx < Size; idx++)
                Element[idx] = array[idx];
        };

        Array& operator=(const Array& array){

            try{
                delete [] Element;
            }
            catch(std::exception& exc){}
            Element = new T[Size];
            for (size_t idx = 0; idx < Size; idx++)
                Element[idx] = array[idx];
            return *this;
        };

        T& operator[](const uint idx) const{

            if (idx > Size)
                throw   std::range_error("") ;
            return Element[idx];
        };

        uint    size() const { return Size;};
};

#endif

/*
template <typename T>
class Array
{
    private:
        T *ptr;
        unsigned int lenght;
    public:
      
        Array() : lenght(0)
        {
            this->ptr = new T[0];
        };
        Array(unsigned int n)
        {
            this-> lenght = n;
            this->ptr = new T[n];
        };
        Array(Array const &obj)
        {
            this->ptr = nullptr;
            *this = obj;
        };
        Array& operator=(Array const &obj)
        {
            if(this == &obj)
                return *this;
            delete [] ptr;
            this->lenght = obj.lenght;
            if (obj.ptr)
            {
                this->ptr = new T[lenght];
                for(unsigned int i = 0; i < lenght; i++)
                    this->ptr[i] = obj.ptr[i];
            }
            else
                this->ptr = nullptr;
            return *this;
        };
        T& operator[](int i) const
        {
            if (i < static_cast<int>(lenght) && i >= 0)
                return ptr[i];
            else
                throw InvalidIndexException();
        };
        unsigned int size() const
        {
            return this->lenght;
        };
};
*/