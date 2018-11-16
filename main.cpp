/*
File: main.cpp
Description: This program creates a transaction and a transaction log to mimic the 
             monthly activity in a bank account.
Author: Byron Perez
Email: byronp1779@student.vvc.edu
Date: November 16, 2018
*/



#include<iostream>
#include<vector>
#include "transactionlog.h"

int main()
{
    Transactionlog translog;
    
    // add transactions to translog
    translog.add_transaction(Transaction(1,1143.24, "Beggining Balance"));
    translog.add_transaction(Transaction(1,1200.00, "dep"));
    translog.add_transaction(Transaction(4,-200.00, "rent"));
    translog.add_transaction(Transaction(7,100.00, "dep"));
    translog.add_transaction(Transaction(9,800.00, "dep"));
    translog.add_transaction(Transaction(13,1000.00, "dep"));
    translog.add_transaction(Transaction(14,-300.00, "car"));
    translog.add_transaction(Transaction(19,1200.00, "dep"));
    translog.add_transaction(Transaction(21,-100.00, "gas"));
    translog.add_transaction(Transaction(22,1200.00, "dep"));
    translog.add_transaction(Transaction(24,-10.00, "coffee"));
    translog.add_transaction(Transaction(26,1200.00, "dep"));
    translog.add_transaction(Transaction(27,-15.00, "donuts"));
    translog.add_transaction(Transaction(29,1200.00, "dep"));
    translog.add_transaction(Transaction(30,10.00, "dep"));
    
    // prints the translog
    translog.print();

return 0;
}

