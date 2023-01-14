#include <iostream>
#include <cmath>
using namespace std;

string Position(float h, float x, float y);

int main()
{
    float h, x, y;
    string position;
    cout << "All values must be integers. In case of decimal values, the program will ignore the digits after the decimal point." << endl;
    cout << "Enter length of a building block" << endl;
    cout << "Enter a positive integer. Negative sign and zero value will be ignored: ";
    cin >> h;
    if (h < 0)
    {
        h = 0 - h;
    }
    else if (h == 0)
    {
        cout << "You entered wrong width. Please restart." << endl;
        return 0;
    }

    h = floor(h);
    cout << "Enter x coordinate: ";
    cin >> x;
    x = floor(x);
    cout << "Enter y coordinate: ";
    cin >> y;
    y = floor(y);

    position = Position(h, x, y);

    cout << "For length = " << h << ", x-coordinate = " << x << ", y-coordinate = " << y << endl;
    cout << position;
    return 0;
}

string Position(float h, float x, float y)
{
    string position;
    if (((x>0 && x< 3*h) && (y>0 && y<h)) || ((x>h && x<2*h) && (y>0 && y<4*h)))
    {
        position = "inside";
    }

    else if ((y == 0 && (x >= 0 && x <= 3*h)) || (x == 0 && (y >= 0 && y <= h)) || (x == 3*h && ( y >=0 && y<=h )) || (y == h && (x >= 0 && x <= h)) || (y == h && (x >= 2*h && x <= 3*h)) || (x == h && (y >= h && y <= 4*h)) || (x == 3*h && ( y >= h && y <= 4*h)) || (y == 4*h && (x >= h && x <= 2*h)))
    {
        position = "border";
    }
    else 
    {
        position = "outside";
    }
    return position;
}