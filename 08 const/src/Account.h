/*
 * Account.h
 *
 *  Created on: 15 may. 2018
 *      Author: win7
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <string>
#include <vector>
#include "Transaction.h"


class Account
{
private :
	std::vector<Transaction> log_op;
	int balance;
	int limit;

public :
	Account();
	std::vector<std::string> Report();
	bool Deposit(int amt);
	bool Withdraw(int amt);
	int GetBalance() const{return balance;}		//This function can be const as well
};


#endif /* ACCOUNT_H_ */
