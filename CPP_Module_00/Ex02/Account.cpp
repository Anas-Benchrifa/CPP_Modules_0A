/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 01:17:14 by aben-chr          #+#    #+#             */
/*   Updated: 2025/07/21 06:48:49 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::GetNbAccounts(void) {
	return (_nbAccounts);
}

int	Account::GetTotalAmount(void) {
	return (_totalAmount);
}

int	Account::GetNbDeposits(void) {
	return (_totalNbDeposits);
}

int	Account::GetNbWithdrawals(void) {
	return (_totalNbWithdrawals);
}

int	Account::checkAmount(void) const {
	return (this->_amount);
}

void	Account::_DisplayTimestamp_(void)
{
	time_t				curr_time;
	struct tm			*tm_local;

	time(&curr_time);
	tm_local = localtime(&curr_time);
	cout << "[" << (tm_local->tm_year + 1900);
	if (tm_local->tm_mon + 1 < 10)
		cout << "0";
	cout << (tm_local->tm_mon + 1);
	if (tm_local->tm_mday < 10)
		cout << "0";
	cout << tm_local->tm_mday << "_";
	if (tm_local->tm_hour < 10)
		cout << "0";
	cout << (tm_local->tm_hour);
	if (tm_local->tm_min < 10)
		cout << "0";
	cout << (tm_local->tm_min);
	if (tm_local->tm_sec < 10)
		cout << "0";
	cout << (tm_local->tm_sec) << "] ";
}

void	Account::DisplayAccountsInfos(void) 
{
	_DisplayTimestamp_();
	cout << "accounts:" << _nbAccounts << ";";
	cout << "total:" << _totalAmount << ";";
	cout << "deposits:" << _totalNbDeposits << ";";
	cout << "withdrawals:" << _totalNbWithdrawals << endl;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_DisplayTimestamp_();
	cout << "index:" << this->_accountIndex << ";";
	cout << "amount:" << this->_amount << ";";
	cout << "created" << endl;
}

Account::~Account(void)
{
	_DisplayTimestamp_();
	cout << "index:" << this->_accountIndex << ";";
	cout << "amount:" << this->_amount << ";";
	cout << "closed" << endl;
}

void	Account::makeDeposit(int deposit)
{
	int	p_amount;

	p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_DisplayTimestamp_();
	cout << "index:" << this->_accountIndex << ";";
	cout << "p_amount:" << p_amount << ";";
	cout << "deposit:" << deposit << ";";
	cout << "amount:" << this->_amount << ";";
	cout << "nb_deposits:" << this->_nbDeposits << endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_DisplayTimestamp_();
	cout << "index:" << this->_accountIndex << ";";
	cout << "p_amount:" << this->_amount << ";";
	if (this->_amount - withdrawal < 0) {
		cout << "withdrawal:refused" << endl;
		return (false);
	}
	cout << "withdrawal:" << withdrawal << ";";
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	cout << "amount:" << this->_amount << ";";
	cout << "nb_withdrawals:" << this->_nbWithdrawals << endl;
	return (true);
}


void	Account::displayStatus(void) const
{
	_DisplayTimestamp_();
	cout << "index:" << this->_accountIndex << ";";
	cout << "amount:" << this->_amount << ";";
	cout << "deposits:" << this->_nbDeposits << ";";
	cout << "withdrawals:" << this->_nbWithdrawals << endl;
}
