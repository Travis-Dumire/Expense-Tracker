Expense Tracker

A simple command-line Expense Tracker application written in C++. This program allows users to record, view, and save their daily expenses.

Features
Add Expenses: Enter the date, category, and amount for each expense.

View Expenses: Display all recorded expenses in a neat table format.

Save & Load: Automatically saves expenses to a file (expenses.txt) and loads them when the program starts.

Installation
Clone or download this repository.

Compile the program using a C++ compiler, for example:

g++ -o expense_tracker expense_tracker.cpp


Run the executable:

./expense_tracker   # Linux / macOS
expense_tracker.exe # Windows

Usage

Menu Options:

--- Expense Tracker ---
1. Add Expense
2. View Expenses
3. Save & Exit
Choose an option:


Adding an Expense:

Enter the date in YYYY-MM-DD format.

Enter a category (e.g., Food, Travel, Bills).

Enter the amount (must be greater than 0).

Viewing Expenses:

Displays all recorded expenses in a formatted table with date, category, and amount.

Saving & Exiting:

Saves all expenses to expenses.txt.

Program exits after saving.

File Format

The program stores expenses in a plain text file expenses.txt:

2025-09-30 Food 12.50
2025-09-30 Travel 25.00

Example
--- Expense Tracker ---
1. Add Expense
2. View Expenses
3. Save & Exit
Choose an option: 1

Enter date (YYYY-MM-DD): 2025-09-30
Enter category: Food
Enter amount: 12.5
Expense added!

--- Expense Tracker ---
1. Add Expense
2. View Expenses
3. Save & Exit
Choose an option: 2

--- Expenses ---
Date        Category    Amount    
2025-09-30  Food       $12.50

Requirements
C++ compiler (C++11 or higher recommended)

Basic knowledge of terminal/command-line usage

License
This project is open-source and free to use for educational purposes.
