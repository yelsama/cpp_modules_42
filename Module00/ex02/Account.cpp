#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout<<"accoutns:"<<_nbAccounts<<";amount:"<<_totalAmount<<";deposits:";
	std::cout<<_totalNbDeposits<<";withdrawals:"<<_totalNbWithdrawals<<"\n";
}

Account::Account(int initial_deposite)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposite;
	_totalAmount += initial_deposite;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts += 1;
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";amount:"<<_amount<<";created";
	std::cout<<"\n";
}

Account::Account()
{
	_accountIndex = _nbAccounts;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";amount:"<<_amount<<";created";
	std::cout<<"\n";
	_nbAccounts += 1;
}

Account::~Account()
{
	_totalAmount -= _amount;
	_nbAccounts -= 1;
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";amount:"<<_amount<<";closed"<<"\n";
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";p_amount:"<<_amount<<";deposit:";
	_amount += deposit;
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	std::cout<<deposit;
	_totalAmount += deposit;
	std::cout<<";amount:"<<_amount<<";nb_deposits:"<<_nbDeposits<<"\n";
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > checkAmount())
	{
		_displayTimestamp();
		std::cout<<"index:"<<_accountIndex<<";p_amount:"<<_amount;
		std::cout<<";withdrawal:refused\n";
		return (false);
	}
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";p_amount:"<<_amount<<";withdrawal:"<<withdrawal;
	_amount -= withdrawal;
	_nbWithdrawals += 1;
	_totalNbWithdrawals += 1;
	std::cout<<";amount:"<<_amount<<";nb_withdrawals:"<<_nbWithdrawals<<"\n";
	return (true);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";amount:"<<_amount<<";deposits:";
	std::cout<<_nbDeposits<<";withdrawals:"<<_nbWithdrawals<<"\n";
}

void	Account::_displayTimestamp(void)
{
	time_t	now;

	now = time(NULL);
	std::cout << std::put_time(localtime(&now), "[%Y%m%d_%H%M%S] ");
}
