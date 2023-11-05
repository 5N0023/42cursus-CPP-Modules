/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:01:19 by mlektaib          #+#    #+#             */
/*   Updated: 2023/11/05 23:02:57 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>


template<typename T>
int easyfind(T &cont, int toFind)
{
    typename T::iterator it = std::find(cont.begin(), cont.end(), toFind);
    if (it == cont.end())
        throw std::exception();
    return *it;
}