#include "Account.hpp"
#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

void	makeDeposit( int deposit );
bool	makeWithdrawal( int withdrawal );
int		checkAmount( void ) const;
void	displayStatus( void ) const;