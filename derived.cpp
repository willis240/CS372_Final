//derived.cpp
//William Fisher
//Apr. 30, 2020

#include "subject.hpp"
#include "derived.hpp"
using std::cout;
using std::endl;

void Cash::spendMoney(const int& amount) const
{
	cout << "You paid $" << amount << " for a brand new car." << endl;
}

void DebitCard::spendMoney(const int& amount) const
{
	cout << "You paid $" << amount << " for a brand new car." << endl;
}