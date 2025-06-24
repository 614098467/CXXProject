


#include "ledger.h"
#include<iomanip>


void Ledger::addRecord(const Record& r){
    records.push_back(r);
}


void Ledger::viewAll(){
    for(const auto& record: records){
        std::cout<<record.date<<std::endl;
        std::cout<<record.category<<std::endl;
        std::cout<<record.note<<std::endl;
        std::cout<<record.amount<<std::endl;
    }
}

/**
 * 按类别查看账目记录
 *
 * 遍历所有记录，打印出指定类别的账目信息
 *
 * @param category 要查询的账目类别
 * @note 输出格式为：日期、类别、备注、金额，每个字段占一行
 */
void Ledger::viewByCategory(const std::string &category)
{
    for (const auto &record : records)
    {
        if (record.category == category){
            std::cout<<record.date<<std::endl;
            std::cout<<record.category<<std::endl;
            std::cout<<record.note<<std::endl;
            std::cout<<record.amount<<std::endl;
        }
    }
}

void Ledger::viewByDate(const std::string& date){
    for(const auto &record:records){
        if(record.date == date){
            std::cout<<record.date<<std::endl;
            std::cout<<record.category<<std::endl;
            std::cout<<record.note<<std::endl;
            std::cout<<record.amount<<std::endl;
        }
    }
}
double Ledger::getTotal(){
    double totolAmound = 0;
    for(const auto &record:records){
        totolAmound += record.amount;
    }
    return totolAmound;
}
void Ledger::viewByNote(const std::string& note){
    for(const auto &record:records){
        if(record.note == note){
            std::cout<<record.date<<std::endl;
            std::cout<<record.category<<std::endl;
            std::cout<<record.note<<std::endl;
            std::cout<<record.amount<<std::endl;
        }
    }
}
void Ledger::saveToFile(const std::string& filename){
    std::ofstream outFile(filename);
    if(!outFile.is_open()){
        std::cerr << "Error: Unable to open file " << filename << " for writing." << std::endl;
        return;
    }

    for(const auto &record:records){
        outFile<< record.date<<","
               << record.category<<","
               << record.note<<","
               << std::fixed << std::setprecision(2) << record.amount<<"\n";
    }

}
void Ledger::loadFromFile(const std::string& filename){}