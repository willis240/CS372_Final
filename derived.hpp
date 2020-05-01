//derived.hpp
//William Fisher
//Apr. 30, 2020

#ifndef DERIVED_HPP
#define DERIVED_HPP

#include<memory.h>

class Cash : Money
{
public:
	void spendMoney(const int & amount) const override;
};

class DebitCard : Money
{
public:
	void spendMoney(const int& amount) const override;
private:
	std::unique_ptr<Cash> cash_ptr;
	bool credibilityCheck(const int& amount) const;
};

#endif
