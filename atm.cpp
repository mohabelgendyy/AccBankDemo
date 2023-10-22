#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
#include <iomanip>

void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{

    double balance = 0;
    int choice = 0;

    do
    {
        std::cout << "**********************\n";
        std::cout << "enter your choice:\n";
        std::cout << "**********************\n";
        std::cout << "1. show balance\n";
        std::cout << "2. deposite money\n";
        std::cout << "3. withdraw money\n";
        std::cout << "4. exit\n";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1:
            showbalance(balance);
            break;
        case 2:
            balance += deposit();
            showbalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showbalance(balance);
            break;
        case 4:
            std::cout << "thank you for your vistting\n";
            break;
        default:
            std::cout << "invaild choice\n";
        }

    } while (choice != 4);

    return 0;
}
void showbalance(double balance)
{
    std::cout << "your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit()
{
    double amount = 0;

    std::cout << "Enter amount to be deposit: ";
    std::cin >> amount;
    if (amount > 0)
    {
        return amount;
    }
    else
    {
        std::cout << "that's not valid:\n";
        return 0;
    }
}
double withdraw(double balance)
{

    double amount = 0;
    std::cout << "Enter the amount you want to withdraw: ";
    std::cin >> amount;

    if (amount > balance)
    {
        std::cout << "insufficient funds\n";
        return 0;
    }
    else if (amount < 0)
    {
        std::cout << "enter a vlid amount\n";
        return 0;
    }
    else
    {
        return amount;
    }
}
