



#include<string>
#include<iostream>
#include <limits>
#include "ledger.h"

using namespace std;


void showMenu() {
    std::cout << "\n=== 个人记账本 ===" << std::endl;
    std::cout << "1. 添加记录" << std::endl;    
    std::cout << "2. 查看所有记录" << std::endl;
    std::cout << "3. 按类别查看记录" << std::endl;
    std::cout << "4. 按日期查看记录" << std::endl;
    std::cout << "5. 按备注查看记录" << std::endl;
    std::cout << "6. 查看总金额" << std::endl;
    std::cout << "7. 保存到文件" << std::endl;
    std::cout << "8. 从文件加载" << std::endl;
    std::cout << "0. 退出程序" << std::endl;
    std::cout << "请选择操作: ";
}

void clearInput() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

Record creatRecord(){
    Record record;

    std::cout << "请输入日期 (YYYY-MM-DD): ";
    std::getline(std::cin, record.date);

    std::cout << "请输入类别 (如: 收入/餐饮/交通/娱乐等): ";
    std::getline(std::cin, record.category);
    
    std::cout << "请输入备注: ";
    std::getline(std::cin, record.note);
    
    std::cout << "请输入金额 (收入为正数，支出为负数): ";
    std::cin >> record.amount;
    clearInput();
    
    return record;

}



int main(){
    Ledger ledger;
    int choice;

    std::cout << "欢迎使用个人记账本系统！" << std::endl;
    std::cout << "提示：金额输入规则 - 收入请输入正数，支出请输入负数" << std::endl;


    while(true){
        showMenu();
        std::cin >> choice;
        clearInput();

        if(std::cin.fail()){
            std::cout << "输入无效，请输入数字！" << std::endl;
            clearInput();
            continue;
        }

        clearInput();

        switch (choice)
        {
        case 1:{       /* code */
            std::cout << "添加新的记录" << std::endl;
            Record newRecoed = creatRecord();
            ledger.addRecord(newRecoed);
            std::cout << "记录添加成功！" << std::endl;
            break;
        }
        case 2:{
            std::cout << "查看所有记录" << std::endl;
            ledger.viewAll();
            break;
        }
        case 3:{
            std::string category;
            std::cout << "请输入要查看的类别" << std::endl;
            std::getline(std::cin,category);
            ledger.viewByCategory(category);
            std::cout << "\n=== " << category << " 类别记录 ===" << std::endl;
            break;
        }
        case 4:{

            std::string date;
            std::cout << "请输入要查看的日期" << std::endl;
            std::getline(std::cin,date);
            ledger.viewByDate(date);
            break;
        }
        case 5:{
            std::string note;
            std::cout << "请输入要查看的备注" << std::endl;
            std::getline(std::cin,note);
            ledger.viewByNote(note);
            break;
        }
        case 6:{
            std::cout << "总金额如下" << std::endl;
            double total = ledger.getTotal();
            std::cout << "\n总金额: " << total << " 元" << std::endl;
            if (total > 0) {
                std::cout << "恭喜！您有盈余 💰" << std::endl;
            } else if (total < 0) {
                std::cout << "注意：您的支出超过收入了 ⚠️" << std::endl;
            } else {
                std::cout << "收支平衡 ⚖️" << std::endl;
            }
            break;
        }
        case 7:{
            std::string filename;
            std::cout << "请输入保存文件名 (默认: ledger_data.txt): ";
            std::getline(std::cin, filename);
            
            if (filename.empty()) {
                filename = "ledger_data.txt";
            }
            
            ledger.saveToFile(filename);
            std::cout << "数据已保存到 " << filename << std::endl;
            break;
        }
        case 0:{
            std::cout << "谢谢使用，再见！👋" << std::endl;
            return 0;
        }
        default:
            std::cout << "无效选择，请重新输入！" << std::endl;
            break;
        }
    }
    std::cout << "\n按回车键继续...";
    std::cin.get();

    return 0;

}


