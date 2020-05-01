//subject.hpp
//William Fisher
//Apr. 30, 2020

#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include<iostream>

class Money 
{
public:
	virtual void spendMoney(const int & amount) const = 0;
};

#endif
