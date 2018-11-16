#include<iostream>
#include<cstring>
#include "transaction.h"

// creates a transaction with default values
Transaction::Transaction()
{
    m_day = 1;
    m_ammount = 0;
    m_description = " ";
}

// creates a transaction with the values passed in as arguments
Transaction::Transaction(int day, double ammount, std::string description)
{
    m_day = day;
    m_ammount = ammount;
    m_description = description;
}

// returns a string with the data contained in the transaction
std::string Transaction::to_string()
{
    return std::to_string(m_day) + "     $" + std::to_string(m_ammount) + "       " + m_description << std::endl;
}

// returns the transaction ammount
double Transaction::get_ammount()
{
    return m_ammount;
}

// returns the transaction date
int Transaction::get_day()
{
    return m_day;
}

