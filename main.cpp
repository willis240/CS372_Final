//main.cpp
//William Fisher
//May 1, 2020

#include "money.hpp"
#include "derived.hpp"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "This program is meant to demonstrate the Proxy design principle." << endl;
	cout << "The DebitCard class is the proxy while the Cash class is the desired" << endl;
	cout << "\"real\" object." << endl << endl;

	Cash directWithdrawal;
	directWithdrawal.spendMoney(505);
	
	DebitCard proxyWithdrawal;
	proxyWithdrawal.spendMoney(505);

	Cash directWithdrawal2;
	directWithdrawal2.spendMoney(60);

	DebitCard proxyWithdrawal2;
	proxyWithdrawal2.spendMoney(60);
}