


//ledger.h

#ifndef LEDGER_H
#define LEDGER_H

#include<iostream>
#include<vector>
#include<fstream>
#include<string>

using namespace std;

struct Record
{
    std::string date;
    std::string category;
    std::string note;
    double amount;
    /* data */
};


class Ledger{

    private:
    std::vector<Record>  records;

    public:
    void addRecord(const Record &r);
    void viewAll();
    void viewByCategory(const std::string &category);
    void viewByDate(const std::string &date);
    double getTotal();
    void viewByNote(const std::string &note);
    void saveToFile(const std::string &filename);
    void loadFromFile(const std::string &filename);

};


#endif