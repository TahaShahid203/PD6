#include <iostream>
#include <cmath>
using namespace std;

float apartmentCost(float nightsStayed, string month);

float studioCost(float nightsStayed, string month);

int main()
{
    float nightsStayed;
    string month;
    float costOfApartment, costOfStudio;

    cout << "Enter month of stay: ";
    cin >> month;

    if (month != "January" && month != "Febuary" && month != "March" && month != "April" && month != "May" && month != "June" && month != "July" && month != "August" && month != "September" && month != "October" && month != "November" && month != "December")
    {
        cout << "That's not a month. Please restart" << endl;
        return 0;
    }
    else if (month == "January" || month == "february" || month == "March" || month == "April" || month == "November" || month == "December")
    {
        cout << "That's not a month in which we provide our services. Please try again." << endl;
        return 0;
    }

    cout << "Enter number of nights stayed (Negative signs and digits after decimal point will be ignored): ";
    cin >> nightsStayed;

    if (nightsStayed < 0)
    {
        nightsStayed = 0 - nightsStayed;
    }
    nightsStayed = floor(nightsStayed);


    costOfApartment = apartmentCost(nightsStayed, month);
    
    costOfStudio = studioCost(nightsStayed, month);


    cout << "Apartment: " << costOfApartment << endl;
    cout << "Studio: " << costOfStudio << endl;
    return 0;
}

float apartmentCost(float nightsStayed, string month)
{
    float cost, costPerNight;
    if (month == "May" || month == "October")
    {
        costPerNight = 65;
    }
    else if (month == "June" || month == "September")
    {
        costPerNight = 68.7;
    }
    else if (month == "July" || month == "August")
    {
        costPerNight = 77;
    }

    cost = costPerNight*nightsStayed;

    if (nightsStayed > 14)
    {
        cost = cost*0.9;
    }

    return cost;
}

float studioCost(float nightsStayed, string month)
{
    float cost, costPerNight;
    if (month == "May" || month == "October")
    {
        costPerNight = 50;
        cost = costPerNight * nightsStayed;
        if (nightsStayed > 14)
        {
            cost = cost * 0.7;
        }
        else if(nightsStayed > 7)
        {
            cost = cost * 0.95;
        }
    }
    else if (month == "June" || month == "Septmeber")
    {
        costPerNight = 75.2;
        cost = costPerNight * nightsStayed;
        if (nightsStayed > 14)
        {
            cost = cost * 0.8;
        }
    }
    else if (month == "July" || month == "August")
    {
        costPerNight = 76;
        cost = costPerNight * nightsStayed;
    }
    return cost;

}