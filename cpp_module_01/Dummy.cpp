/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:10:53 by tmatis            #+#    #+#             */
/*   Updated: 2021/09/21 16:12:24 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy(void) : ATarget("Target Practice Dummy") {}

Dummy::~Dummy(void) {}

ATarget *Dummy::clone(void) const
{
	return (new Dummy());
}
