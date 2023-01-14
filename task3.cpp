#include <iostream>
#include <cmath>
using namespace std;

string Zodiac(float date, string month);

int main()
{
    float date;
    string month, sign;

    cout << "Do not enter negative or decimal values. Negative signs and digits after decimal will be ignored." << endl;
    cout << "Enter your date of birth: ";
    cin >> date;

    
    if (date < 0)
    {
        date = 0 - date;
    }
    date = floor(date);
    
    cout << "Enter your month: ";
    cin >> month;

    if (month != "January" && month != "Febuary" && month != "March" && month != "April" && month != "May" && month != "June" && month != "July" && month != "August" && month != "September" && month != "October" && month != "November" && month != "December")
    {
        cout << "That's not a month. Please restart" << endl;
        return 0;
    }

    if ((month == "January" || month == "March" || month == "May" || month == "July" || month == "August" || month == "October" || month == "December") && (date > 31))
    
    {
        cout << "This month doesn't have these many days. Please restart" << endl;
        return 0;
    }

    else if ((month == "April" || month == "June" || month == "September" || month == "November") && (date > 30))
    {
        cout << "This month doesn't have these many days. Please restart" << endl;
        return 0;
    }

    else if (month == "february" && date > 29)
    {
        cout << "This month doesn't have these many days. Please restart" << endl;
        return 0;
    }

    sign = Zodiac(date, month);

    cout << "Your sign is: " << sign << endl;
    return 0;
}


string Zodiac(float date, string month)
{
    string sign;

    if (date>=21 && month=="March" || date <= 19 && month == "April")
    {
        sign = "Aries";
    }

    else if (date>=21 && month=="March" || date <= 19 && month == "April")
    {
        sign = "Aries";
    }

    else if (date>=20 && month=="April" || date <= 20 && month == "May")
    {
        sign = "Taurus";
    }
    else if (date>=21 && month=="May" || date <= 20 && month == "June")
    {
        sign = "Gemini";
    }
    else if (date>=21 && month=="June" || date <= 22 && month == "July")
    {
        sign = "Cancer";
    }
    else if (date>=23 && month=="July" || date <= 22 && month == "August")
    {
        sign = "Leo";
    }
    else if (date>=23 && month=="August" || date <= 22 && month == "September")
    {
        sign = "Virgo";
    }
    else if (date>=23 && month=="September" || date <= 22 && month == "October")
    {
        sign = "Libra";
    }
    else if (date>=23 && month=="October" || date <= 21 && month == "November")
    {
        sign = "Scorpio";
    }
    else if (date>=22 && month=="November" || date <= 21 && month == "December")
    {
        sign = "Saggitarius";
    }
    else if (date>=22 && month=="December" || date <= 19 && month == "January")
    {
        sign = "Capricorn";
    }
    else if (date>=20 && month=="January" || date <= 18 && month == "February")
    {
        sign = "Aquarius";
    }
    else if (date>=19 && month=="February" || date <= 20 && month == "March")
    {
        sign = "Pisces";
    } 

    return sign;
}