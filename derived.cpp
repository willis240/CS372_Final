//derived.cpp
//William Fisher
//Apr. 30, 2020

#include "subject.hpp"
#include "derived.hpp"
using std::cout;
using std::endl;

void Cash::spendMoney(const int& amount) const
{
	cout << "You paid $" << amount << " for some thingamajig." << endl;
}

void DebitCard::spendMoney(const int& amount) const
{
	if (this->credibilityCheck(amount))
	{
		cout << "This withdrawal seems like a legitimate amount." << endl;
		this->cash_ptr->spendMoney(amount);
	}
}

bool DebitCard::credibilityCheck(const int& amount) const
{
	if (amount > 500)
	{
		cout << "This is a suspiciously large sum of money." << endl;
		return false;
	}
	return true;
}