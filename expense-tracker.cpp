#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
using namespace std;

struct Expense {
    string date;       // e.g., 2025-09-30
    string category;   // e.g., Food, Travel, Bills
    double amount;     // must be > 0
};

// Display menu options
void showMenu() {
    cout << "\n--- Expense Tracker ---\n";
    cout << "1. Add Expense\n";
    cout << "2. View Expenses\n";
    cout << "3. Save & Exit\n";
    cout << "Choose an option: ";
}

// Add a new expense
void addExpense(vector<Expense>& expenses) {
    Expense e;
    cout << "Enter date (YYYY-MM-DD): ";
    cin >> e.date;

    cout << "Enter category: ";
    cin >> e.category;

    cout << "Enter amount: ";
    cin >> e.amount;

    if (e.amount <= 0) {
        cout << "Invalid amount. Must be greater than 0.\n";
        return;
    }

    expenses.push_back(e);
    cout << "Expense added!\n";
}

// View all expenses
void viewExpenses(const vector<Expense>& expenses) {
    cout << "\n--- Expenses ---\n";
    if (expenses.empty()) {
        cout << "No expenses recorded.\n";
        return;
    }

    cout << left << setw(12) << "Date"
         << setw(12) << "Category"
         << setw(10) << "Amount" << endl;

    for (const auto& e : expenses) {
        cout << left << setw(12) << e.date
             << setw(12) << e.category
             << "$" << fixed << setprecision(2) << e.amount << endl;
    }
}

// Save expenses to file
void saveToFile(const vector<Expense>& expenses, const string& filename) {
    ofstream outFile(filename);
    for (const auto& e : expenses) {
        outFile << e.date << " " << e.category << " " << e.amount << endl;
    }
    outFile.close();
    cout << "Expenses saved to " << filename << endl;
}

// Load expenses from file
void loadFromFile(vector<Expense>& expenses, const string& filename) {
    ifstream inFile(filename);
    Expense e;
    while (inFile >> e.date >> e.category >> e.amount) {
        expenses.push_back(e);
    }
    inFile.close();
}

int main() {
    vector<Expense> expenses;
    string filename = "expenses.txt";
    loadFromFile(expenses, filename);

    int choice;
    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1: addExpense(expenses); break;
            case 2: viewExpenses(expenses); break;
            case 3: saveToFile(expenses, filename); break;
            default: cout << "Invalid choice.\n"; break;
        }
    } while (choice != 3);

    return 0;
}
