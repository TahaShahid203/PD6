#include <iostream>
using namespace std;

float costOfFruit(string nameOfWeek, string nameOffruit, float quantityOfFruit);

int main()
{
    string nameOfFruit, nameOfWeek;
    float quantityOfFruit, cost;
    cout << "Enter name of fruit: ";
    cin >> nameOfFruit;
    if (nameOfFruit != "banana" && nameOfFruit != "apple" && nameOfFruit != "orange" && nameOfFruit != "grapefruit" && nameOfFruit != "kiwi" && nameOfFruit != "pineapple" && nameOfFruit != "grapes")
    {
        cout << "That's not a fruit we sell. Please try something else." << endl;
        return 0;
    }
    cout << "Enter name of week: ";
    cin >> nameOfWeek;
    if (nameOfWeek != "Monday" && nameOfWeek != "Tuesday" && nameOfWeek != "Wednesday" && nameOfWeek != "Thursday" && nameOfWeek != "Friday" && nameOfWeek != "Saturday" && nameOfWeek != "Sunday")
    {
        cout << "That's not a day. Please try again." << endl;
        return 0;
    }
    cout << "Enter quantity of fruit bought: ";
    cin >> quantityOfFruit;

    cost = costOfFruit(nameOfWeek, nameOfFruit, quantityOfFruit);

    cout << "Your total cost will be : " << cost << endl; 
    return 0;
}

float costOfFruit(string nameOfWeek, string nameOffruit, float quantityOfFruit)
{
    float cost, costPerQuantity;
    
    if (nameOfWeek == "Sunday" || nameOfWeek == "Saturday")
    {
        if (nameOffruit == "banana")
        {
            costPerQuantity = 2.7;
        }
        else if (nameOffruit == "apple")
        {
            costPerQuantity = 1.25;
        }

        else if (nameOffruit == "orange")
        {
            costPerQuantity = 0.9;
        }
        else if (nameOffruit == "grapefruit")
        {
            costPerQuantity = 1.6;
        }
        else if (nameOffruit == "kiwi")
        {
            costPerQuantity = 3;
        }
        else if (nameOffruit == "pineapple")
        {
            costPerQuantity = 5.6;
        }
        else if (nameOffruit == "grapes")
        {
            costPerQuantity = 4.2;
        }
        else 
        {
            cout << "We don't have that fruit." << endl;
            return 0;
        }
    }

    else if (nameOfWeek == "Monday" || nameOfWeek == "Tuesday" || nameOfWeek == "Wednesday" || nameOfWeek == "Thursday" || nameOfWeek == "friday")
    {
        if (nameOffruit == "banana")
        {
            costPerQuantity = 2.5;
        }
        else if (nameOffruit == "apple")
        {
            costPerQuantity = 1.2;
        }

        else if (nameOffruit == "orange")
        {
            costPerQuantity = 0.85;
        }
        else if (nameOffruit == "grapefruit")
        {
            costPerQuantity = 1.45;
        }
        else if (nameOffruit == "kiwi")
        {
            costPerQuantity = 2.7;
        }
        else if (nameOffruit == "pineapple")
        {
            costPerQuantity = 5.5;
        }
        else if (nameOffruit == "grapes")
        {
            costPerQuantity = 3.85;
        }
        else 
        {
            cout << "We don't have that fruit." << endl;
            return 0;
        }
    }
    else 
    {
        cout << "That is not the name of a day." << endl;
        return 0;
    }

    cost = costPerQuantity*quantityOfFruit;

    return cost;
}

