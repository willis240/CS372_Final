//derived.cpp
//William Fisher
//Apr. 30, 2020

#include "money.hpp"
#include "derived.hpp"
using std::cout;
using std::endl;

void Cash::spendMoney(const int& amount) const
{
	cout << "You attempt to spend $" << amount << " in cash." << endl;
	cout << "You withdrew $" << amount << " for some thingamajig." << endl << endl;
}

void DebitCard::spendMoney(const int& amount) const
{
	cout << "You attempt to spend $" << amount << " using your debit card." << endl;
	if (this->credibilityCheck(amount))
	{
		cout << "You withdrew $" << amount << " for some thingamajig." << endl << endl;
		this->cash_ptr->spendMoney(amount);
	}
	cout << "The transaction was aborted due to doubts about its authenticity." << endl << endl;
}

bool DebitCard::credibilityCheck(const int& amount) const
{
	if (amount > 500)
	{
		cout << "This is a suspiciously large sum of money." << endl;
		return false;
	}
	cout << "This withdrawal seems like a legitimate amount." << endl;
	return true;
}