#include <iostream>
#include <cmath>
using namespace std;


int Diff(int examHour, int examMinute, int arrivalHour, int arrivalMinute);

main()
{
    float test;
    float examHour2, examMinute2, arrivalHour2, arrivalMinute2;
    int examHour, examMinute, arrivalHour, arrivalMinute, diffFirstDigit, diffSecondDigit;

    cout << "No negative or decimal values must be entered. Negative signs and digits after decimal values will be ignored." << endl;
    cout << endl;

    cout << "Exam starting time (hours): ";
    cin >> examHour2;

    if (examHour2 < 0)
    {
        examHour2 = 0 - examHour2;
    }
    examHour2 = floor(examHour2);
    examHour = examHour2;

    cout << "Exam starting time (minutes): ";
    cin >> examMinute2;

    if (examMinute2 < 0)
    {
        examMinute2 = 0 - examMinute2;
    }
    examMinute2 = floor(examMinute2);
    examMinute = examMinute2;

    cout << "Student hour of arrival (hours): ";
    cin >> arrivalHour2;

    if (arrivalHour2 < 0)
    {
        arrivalHour2 = 0 - arrivalHour2;
    }
    arrivalHour2 = floor(arrivalHour2);
    arrivalHour = arrivalHour2;

    cout << "Student minutes of arrival: ";
    cin >> arrivalMinute2;

    if (arrivalMinute2 < 0)
    {
        arrivalMinute2 = 0 - arrivalMinute2;
    }
    arrivalMinute2 = floor(arrivalMinute2);
    arrivalMinute = arrivalMinute2;

    int diff = Diff(examHour, examMinute, arrivalHour, arrivalMinute);
    
    if (diff < 0)
    {
        diff = 0  - diff;
        if (diff >= 1)
        {
            if (diff <= 30)
            {
                cout << "On Time" << endl;
                cout << diff << " minutes before exam" << endl;
            }
            else if (diff > 30 && diff < 60)
            {
                cout << "Early" << endl;
                cout << diff << " minutes before the exam" << endl;
            }
            else if (diff >= 60)
            {
                int diffHour = diff/60;
                int diffMinutes = diff - diffHour*60;
                if (diffMinutes < 10)
                {
                    diffFirstDigit = 0;
                    diffSecondDigit = diffMinutes;
                }
                else if (diffMinutes >=10)
                {
                    diffFirstDigit = diffMinutes/10;
                    diffSecondDigit = diffMinutes%10;
                }
                cout << "Early" << endl;

                cout << diffHour << ":" << diffFirstDigit << diffSecondDigit << " hours before exam" << endl;
            }
        }
    }
    else if (diff > 0)
    {
        if (diff >= 1)
        {
            if (diff >=60)
            {
                int diffHour = diff/60;
                int diffMinutes = diff - diffHour*60;
                if (diffMinutes < 10)
                {
                    diffFirstDigit = 0;
                    diffSecondDigit = diffMinutes;
                }
                else if (diffMinutes >=10)
                {
                    diffFirstDigit = diffMinutes/10;
                    diffSecondDigit = diffMinutes % 10;
                }
                cout << "Late" << endl;
                cout << diffHour << ":" << diffFirstDigit << diffSecondDigit << " hours after exam" << endl; 
            }
            else if (diff < 60)
            {
                cout << "Late" << endl;
                cout << diff << " minutes after exam" << endl;
            }
        }
    }
    else if (diff == 0)
    {
        cout << "On time" << endl;
    }

}


int Diff(int examHour, int examMinute, int arrivalHour, int arrivalMinute)
{
    int diff;
    int examMinutesOverall = examHour*60 + examMinute;
    int arrivalMinutesOverall = arrivalHour*60 + arrivalMinute;
    diff = arrivalMinutesOverall - examMinutesOverall;
    return diff;
}
