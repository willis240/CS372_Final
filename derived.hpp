//derived.hpp
//William Fisher
//Apr. 30, 2020

#ifndef DERIVED_HPP
#define DERIVED_HPP

class Cash : public Money
{
public:
	void spendMoney(const int & amount) const override;
};

class DebitCard : public Money
{
public:
	void spendMoney(const int& amount) const override;
private:
	Cash* cash_ptr;
};

#endif
