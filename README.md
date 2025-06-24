# 个人记账本系统 / Personal Ledger System

## 项目简介 / Project Overview

这是一个基于C++开发的个人记账本系统，帮助用户轻松管理日常收入和支出记录。系统采用面向对象设计，支持多种数据查看方式和文件持久化存储。

*A personal ledger system developed in C++, designed to help users easily manage their daily income and expense records. The system uses object-oriented design and supports multiple data viewing methods with file persistence.*

## 主要功能 / Key Features

### 📝 记录管理 / Record Management
- 添加收入/支出记录 / Add income/expense records
- 支持日期、类别、备注、金额等字段 / Support date, category, note, amount fields
- 灵活的正负数输入方式（正数表示收入，负数表示支出）/ Flexible positive/negative input (positive for income, negative for expenses)

### 🔍 数据查看 / Data Viewing
- 查看所有记录 / View all records
- 按类别筛选记录 / Filter records by category
- 按日期筛选记录 / Filter records by date
- 按备注关键字搜索 / Search records by note keywords
- 计算总金额（收支平衡）/ Calculate total amount (balance)

### 💾 数据持久化 / Data Persistence
- 自动保存到本地文件 / Auto-save to local files
- 程序启动时自动加载历史数据 / Auto-load historical data on startup
- 支持自定义文件名保存/加载 / Support custom filename for save/load
- 程序退出时自动备份数据 / Auto-backup data on exit

### 🎨 用户体验 / User Experience
- 简洁直观的菜单界面 / Clean and intuitive menu interface
- 完善的输入验证和错误处理 / Comprehensive input validation and error handling
- 友好的提示信息和状态反馈 / User-friendly prompts and status feedback
- 支持中文显示和交互 / Support Chinese display and interaction

## 技术架构 / Technical Architecture

### 🏗️ 系统设计 / System Design
- **面向对象设计** / Object-Oriented Design
- **模块化架构** / Modular Architecture
- **清晰的类职责分离** / Clear separation of class responsibilities

### 📁 项目结构 / Project Structure
```
p1-jizhangben/
├── ledger.h          # 头文件：类声明和结构体定义
├── ledger.cpp        # 实现文件：所有函数的具体实现
├── main.cpp          # 主程序：用户界面和程序入口
├── Makefile          # 构建脚本：自动化编译
└── ledger_data.txt   # 数据文件：存储用户记录
```

### 🛠️ 技术栈 / Tech Stack
- **编程语言** / Programming Language: C++11+
- **编译器** / Compiler: GCC/G++
- **构建工具** / Build Tool: Make
- **开发环境** / Development Environment: VS Code
- **版本控制** / Version Control: Git

### 📊 核心数据结构 / Core Data Structures
```cpp
struct Record {
    std::string date;      // 记录日期
    std::string category;  // 收支类别
    std::string note;      // 备注说明
    double amount;         // 金额（正负表示收支）
};

class Ledger {
    std::vector<Record> records;  // 记录容器
    // 各种操作方法...
};
```

## 开始使用 / Getting Started

### 📋 环境要求 / Prerequisites
- C++11 或更高版本编译器 / C++11+ compiler
- Make 构建工具 / Make build tool
- macOS/Linux/Windows 系统 / macOS/Linux/Windows system

### 🚀 快速开始 / Quick Start
```bash
# 1. 克隆项目 / Clone the project
git clone [repository-url]
cd p1-jizhangben

# 2. 编译程序 / Compile the program
make

# 3. 运行程序 / Run the program
./main

# 4. 清理编译文件 / Clean build files
make clean
```

### 💡 使用示例 / Usage Example
1. 启动程序后选择"添加记录" / Select "Add Record" after startup
2. 输入日期格式：2024-01-15 / Enter date format: 2024-01-15
3. 输入类别如：餐饮、交通、工资等 / Enter category like: Food, Transport, Salary
4. 输入金额：收入用正数，支出用负数 / Enter amount: positive for income, negative for expenses
5. 程序自动保存，下次启动时自动加载 / Auto-save and auto-load on next startup

## 项目特色 / Project Highlights

✅ **简单易用** / Easy to Use - 直观的命令行界面，上手简单  
✅ **功能完整** / Feature Complete - 涵盖个人记账的核心需求  
✅ **代码规范** / Clean Code - 良好的代码结构和注释  
✅ **跨平台** / Cross Platform - 支持主流操作系统  
✅ **轻量级** / Lightweight - 无第三方依赖，编译后体积小  
✅ **可扩展** / Extensible - 模块化设计，易于功能扩展  

---

*这个项目是C++面向对象编程的实践项目，展示了基础的软件设计原则和编程技巧。*  
*This project serves as a practical C++ object-oriented programming exercise, demonstrating fundamental software design principles and programming techniques.*
