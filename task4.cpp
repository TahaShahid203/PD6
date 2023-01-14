#include <iostream>
#include <cmath>
using namespace std;


float Charges(char typeOfService, float minutes, char timeOfTheDay);

int main()
{
    float minutes;
    char typeOfService;
    char timeOfDay;
    float cost;

    cout << "Enter which type of customer you are (Residential or premium) select(r/p): ";
    cin >> typeOfService;
    if (typeOfService == 'p')
    {
        cout << "(Press 'D' for day time or press 'N' for night time)call: ";
        cin >> timeOfDay;
        if (timeOfDay != 'D' && timeOfDay != 'N')
        {
            cout << "That's not a time in which we provide our services. Please try again." << endl;
            return 0;
        } 
    }
    else if (typeOfService != 'r')
    {
        cout << "That is not a service we provide. Please try again. " << endl;
        return 0;
    }

    cout << "Enter number of mins you used the service(Please enter a positive integer or 0. Negative signs and digits after decimal point will be ignored) : ";
    cin >> minutes;

    if (minutes < 0)
    {
        minutes = 0 - minutes;
    }

    minutes = floor(minutes);

    cost = Charges(typeOfService, minutes, timeOfDay);

    cout << "Your total cost is : " << cost << endl;
    return 0;
}

float Charges(char typeOfService, float minutes, char timeOfTheDay)
{
    float cost, costPerMinute, initialCost;

    if (typeOfService == 'r')
    {
        if (minutes > 50)
        {
            minutes = minutes - 50;
        }
        else
        {
            minutes = 0;
        }
        costPerMinute = 0.2;
        initialCost = 10;
    }

    else if (typeOfService == 'p')
    {
        if (timeOfTheDay == 'D')
        {
            if (minutes > 75)
            {
                minutes = minutes - 75;
            }
            else
            {
                minutes = 0;
            }
            costPerMinute = 0.1;
        }
        else if (timeOfTheDay == 'N')
        {
            if (minutes > 100)
            {
                minutes = minutes - 100;
            }
            else
            {
                minutes = 0;
            }
            costPerMinute = 0.05;
        }
        initialCost = 25;
    }

    cost = initialCost + costPerMinute*minutes;
    return cost;
}