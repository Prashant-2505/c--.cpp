/*
Frank's carpet cleaning service
cgarge per room is $30
sales tax is 6%
Estimates are valid for 30 days

Prompt the user for the number of rooms they would like cleaned
and provide an estimate such as:


Pseudocode:
Prompt the user to enter the no of rooms
Display the no of rooms
Display price per room
Display cost
display tax rate

================================================

Display the cost: (no of rooms * price per rooms)
Display tax: no of rooms * price per rooms * tax rate
Display the total estimate: (no of rooms * price per rooms) + (no of rooms * price per rooms * tax rate)

*/

#include <iostream>
using namespace std;

int main()
{
    const double price_per_room{30};
    const double sales_tax{0.06};
    const int expiry{30};

    cout << "Welcome to the Frank's carpet cleaning service " << endl;
    cout << endl;
    cout << "How many rooms you would like to cleaned" << flush;
    int no_of_rooms{0};
    cin >> no_of_rooms;
    cout << "Price per room is $" << price_per_room << endl;
    cout << "cost: $" << no_of_rooms * price_per_room << endl;
    cout << "Tax: " << sales_tax << endl;

    cout << "============================================================================" << endl;

    cout << "Estimate Cost is $" << no_of_rooms * price_per_room << endl;
    cout << "Estimate tax is $" << no_of_rooms * price_per_room * sales_tax << endl;
    cout << "Total Estimate is $" << (no_of_rooms * price_per_room) + (no_of_rooms * price_per_room * sales_tax) << endl;
    cout << "This estimate valid for " << 30 << "Days" << endl;

    return 0;
}