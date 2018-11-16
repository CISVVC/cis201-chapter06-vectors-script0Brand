#ifndef TRANSACTIONLOG_H
#define TRANSACTIONLOG_H
#include<iostream>
#include<vector>

/**
declaring the class transactionlog 
@ private vector m_transactions.
@ m_balance contains daily balance
@ m_min_balance contains the minimum daily balance
@ m_average_balance contains the average daily for the month
*/

class Transactionlog
{
private:
    std::vector<Transaction> m_transactions;
    double m_balance;
    double m_min_balance;
    double m_average_balance;

public:
    Transactionlog();
    void add_transaction(Transaction t);
    int min_daily_balance();
    double average_daily_balance();
    void print();
};

#endif
