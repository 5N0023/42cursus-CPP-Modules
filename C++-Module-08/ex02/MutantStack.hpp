/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:01:35 by mlektaib          #+#    #+#             */
/*   Updated: 2023/11/05 23:01:36 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(){}
        MutantStack(MutantStack const &src){
            *this = src;
        }
        MutantStack &operator=(MutantStack const &src){
            if (this != &src)
            {
                this->c = src.c;
            }
            return *this;
        }
        ~MutantStack(){}
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin(){
            return this->c.begin();
        }
        iterator end(){
            return this->c.end();
        }


};