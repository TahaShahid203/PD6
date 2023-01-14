#include <iostream>
using namespace std;


string Activity(string, string);

int main()
{
    string temperature, humidity, activity;
    cout << "Enter temperature: ";
    cin >> temperature;
    
    cout << "Enter humidity: ";
    cin >> humidity;
    if ((temperature != "cold" && temperature != "warm") || (humidity != "dry" && humidity != "humid"))
    {
    
        cout << "That's not an option. Please restart." << endl;
        return 0; 
     
    }

    activity = Activity(temperature, humidity);

    cout << activity << endl;
    return 0;
}

string Activity(string temperature, string humidity)
{
    string activity;

    if (temperature == "warm" && humidity == "dry")
    {
        activity = "play tennis";
    }

    if (temperature == "warm" && humidity == "humid")
    {
        activity = "swim";
    }
    if (temperature == "cold" && humidity == "dry")
    {
        activity = "play basketball";
    }
    if (temperature == "cold" && humidity == "humid")
    {
        activity = "Watch tv";
    }

    return activity;
}
