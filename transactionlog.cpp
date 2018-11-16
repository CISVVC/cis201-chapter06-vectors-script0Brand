#include<iostream>
#include "transactionlog.h"

// MAX_DAYS containt the number of days in the month
const int MAX_DAYS = 30;

// creates a vector with default values
Transactionlog::Transactionlog()
{
    m_balance = 0;
    m_min_balance = false;
    m_average_balance = 0;
}

// adds a transaction to a vector passed in as argument
void Transactionlog::add_transaction(Transaction t)
{
    m_transactions.push_back(t);
    m_balance += t.get_ammount();
    min_daily_balance();
}

// returns the minimum daily balance
int Transactionlog::min_daily_balance()
{
    if(m_balance < m_min_balance || m_min_balance == false)
        m_min_balance = m_balance;
}

// returns the average daily balance
double Transactionlog::average_daily_balance()
{
    double sum_total = 0;
    for (double i = 0; i < m_transactions.size(); i++)
    {
        sum_total = sum_total + m_transactions[i].get_ammount();
    }
    return sum_total/MAX_DAYS;
}

// prints a report for the month's activities
void Transactionlog::print()
{
    double sum_total = 0;
    std::cout << "----------------------------MONTLY STATEMENT----------------------------" << std::endl;
    for(int i = 0; i < m_transactions.size(); i++)
    {
        std::cout << "Day          Ammount          Description" << std::endl;
        std::cout << m_transactions[i].to_string() << std::endl;
        std::cout << sum_total + m_transactions[i].get_ammount();
        std::cout << "--------------------------------------------------------------------" << std::endl;
        std::cout << "Daily Balance: $" << sum_total << std::endl;
        std::cout << "         " << std:: endl;
    }
    std::cout << "Monthly Balance:            $" << sum_total << std::endl;
    std::cout << "Average Daily Balance:      $" << average_daily_balance() << std::endl;
    std::cout << "Minimum Daily Balance:      $" << m_min_balance << std::endl;
    std::cout << "Total Interest:             $" << sum_total * 0.05 << std::endl;
}


