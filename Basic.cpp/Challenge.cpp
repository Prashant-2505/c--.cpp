
/*
Frank's carpet cleaning service
charge per small room is $25
charge per big room is $35
sales tax is 6%
Estimates are valid for 30 days

Prompt the user for the number of rooms they would like cleaned
and provide an estimate such as:

Prompt the user to enter the rooms

Display Total no big rooms                    Display total no of small rooms
Display price of big rooms $35                Display price of small rooms
Display cost of claeaning                     Display cost of cleaning
Display sale tax 6%                           Display slae tax 6%

               Total cost rooms
================================


Display estimate Total cleaning cost (total cost of small room + total cost of big rooms)
Display the estimate sale tax
Display the estimate grand total cost
Display the estimate expiry
*/

#include <iostream>
using namespace std;

int main()
{

    int no_of_small_rooms;
    int no_of_big_rooms;
    const double tax{0.06};
    const double price_per_small_rooms{25};
    const double price_per_big_rooms{35};
    const int expiry{30};

    cout << " Welcome to Frank's Room cleaning service " << endl;
    cout << endl;

    cout << " How much small rooms you would like to clean " << flush;
    cin >> no_of_small_rooms;
    cout << " Price per small rooms: $" << price_per_small_rooms << endl;
    cout << " Cost is $" << price_per_small_rooms * no_of_small_rooms << endl;
    cout << " Tax applied is 6%:  $" << tax * (price_per_small_rooms * no_of_small_rooms) << endl;

    cout << endl;

    cout << " How much big rooms you would lke to clean " << flush;
    cin >> no_of_big_rooms;
    cout << " Price per big rooms: $" << price_per_big_rooms << endl;
    cout << " Cost is $" << price_per_big_rooms * no_of_big_rooms << endl;
    cout << " Tax applied is 6%: $" << tax * (price_per_big_rooms * no_of_big_rooms) << endl;

    cout << endl;

    cout << " Total estimate cost of both rooms $" << price_per_small_rooms * no_of_small_rooms + price_per_big_rooms * no_of_big_rooms << endl;
    cout << " Estimate Tax is: $" << tax * (price_per_small_rooms * no_of_small_rooms) + tax * (price_per_big_rooms * no_of_big_rooms) << endl;
    cout << " Grand Total estimate cost is $" << price_per_small_rooms * no_of_small_rooms + price_per_big_rooms * no_of_big_rooms * tax * (price_per_small_rooms * no_of_small_rooms) + tax * (price_per_big_rooms * no_of_big_rooms) << endl;

    return 0;
}