#include <iostream>
#include <cmath>
using namespace std;

string Grade(float percentage);

int main()
{
    string name, grade;
    float engMarks, mathMarks, chemMarks, bioMarks, socialSciencesMarks;
    float percentage;

    cout << "Marks cannot be negative or in decimal. Negative signs and digits after decimal point will be ignored. " << endl;
    cout << "Enter student's name: ";
    cin >> name;

    cout << "Enter English marks: ";
    cin >> engMarks;
    
    if (engMarks < 0)
    {
        engMarks = 0 - engMarks;
    }
    engMarks = floor(engMarks);

    cout << "Enter Math marks: ";
    cin >> mathMarks;
    if (mathMarks < 0)
    {
        mathMarks = 0 - mathMarks;
    }
    mathMarks = floor(mathMarks);
    
    cout << "Enter Chemistry marks: ";
    cin >> chemMarks;
    if (chemMarks < 0)
    {
        chemMarks = 0 - chemMarks;
    }
    chemMarks = floor(chemMarks);
    
    cout << "Enter Biology marks: ";
    cin >> bioMarks;
    if (bioMarks < 0)
    {
        bioMarks = 0 - bioMarks;
    }
    bioMarks = floor(bioMarks);
    
    cout << "Enter Social Sciences marks: ";
    cin >> socialSciencesMarks;
    if (socialSciencesMarks < 0)
    {
        socialSciencesMarks = 0 - socialSciencesMarks;
    }
    socialSciencesMarks = floor(socialSciencesMarks);
    
    if (mathMarks <= 40 || engMarks <= 40 || chemMarks <=40 || bioMarks <= 40 || socialSciencesMarks <= 40)
    {
        cout << "Grade = F" << endl;
        return 0;
    }
    int total = engMarks + chemMarks + mathMarks + bioMarks + socialSciencesMarks;

    percentage = total/5.0;

    grade = Grade(percentage);

    cout << name << ":" << endl;
    cout << "Total marks: " << total << endl;
    cout << "Percentage: " << percentage << endl;
    cout << "Grade: " << grade << endl; 
    return 0;


}


string Grade(float percentage)
{
    string grade;
    if (percentage > 90 && percentage <= 100)
    {
        grade = "A+";
    }

    if (percentage > 80 && percentage <= 90)
    {
        grade = "A";
    }

    if (percentage > 70 && percentage <= 80)
    {
        grade = "B+";
    }

    if (percentage > 60 && percentage <= 70)
    {
        grade = "B";
    }

    if (percentage > 50 && percentage <= 60)
    {
        grade = "C";
    }

    if (percentage > 40 && percentage <= 50)
    {
        grade = "D";
    }

    if (percentage <= 40)
    {
        grade = "F";
    }

    return grade;
}