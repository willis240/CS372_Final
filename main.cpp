//main.cpp
//William Fisher
//Apr. 30, 2020

#include "money.hpp"
#include "derived.hpp"
using std::cout;
using std::endl;

int main()
{
	Cash directWithdrawal;
	directWithdrawal.spendMoney(505);
	
	DebitCard proxyWithdrawal;
	proxyWithdrawal.spendMoney(505);

	Cash directWithdrawal2;
	directWithdrawal2.spendMoney(60);

	DebitCard proxyWithdrawal2;
	proxyWithdrawal2.spendMoney(60);
}