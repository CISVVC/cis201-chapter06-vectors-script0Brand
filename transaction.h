#ifndef TRANSACTION_H
#define TRANSACTION_H
#include<iostream>
#include<vector>
#include<string>

class Transaction
{
private:
    int m_day;
    double m_ammount;
    std::string m_description;

public:
    Transaction();
    Transaction(int day, double ammount, std::string description);
    std::string to_string();
    int get_day();
    double get_ammount();
};

#endif

