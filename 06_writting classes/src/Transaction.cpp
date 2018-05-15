/*
 * Transaction.cpp
 *
 *  Created on: 15 may. 2018
 *      Author: win7
 */

#include "Transaction.h"

using namespace std;

Transaction::Transaction(int amt, std::string kind):amount(amt), type(kind)
{
}

string Transaction::report()
{
	string report;
	report += "   ";
	report += type;
	report += " ";
	report += to_string(amount);

	return report;
}
