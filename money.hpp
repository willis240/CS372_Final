//Money.hpp
//William Fisher
//May 1, 2020

#ifndef MONEY_HPP
#define MONEY_HPP

#include<iostream>

class Money 
{
public:
	virtual void spendMoney(const int & amount) const = 0;
};

#endif
