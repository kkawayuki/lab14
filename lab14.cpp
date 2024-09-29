#include <iostream>
using namespace std;

//class declaration
class Color
{
private:
    int r, g, b;

public:
    int getterR() const { return r; } // inline functions, const to avoid loophole changes
    int getterG() const { return g; }
    int getterB() const { return b; }

    void setterR(int value) { r = value; } // setter inline for seperate
    void setterG(int value) { g = value; }
    void setterB(int value) { b = value; }

    void setterAll(int red, int green, int blue)
    {
        r = red;
        g = green;
        b = blue;
    } // setter for each var (due to custom constructors not having been introduced yet)

    void printAll() const //unsure if const needed here but method acts similarly to getter so included
    {
        cout << "-------------\n"; // formatting
        cout << "red value: " << r << '\n';
        cout << "green value: " << g << '\n';
        cout << "blue value: " << b << '\n';
    }
};

/**************************************
* Fucntion: Main
**************************************/
int main()
{
    // using individual setters/getters for the first 
    Color color1;
    color1.setterR(100);
    color1.setterB(234);
    color1.setterG(23);
    cout << "red value: " << color1.getterR() << '\n';
    cout << "green value: " << color1.getterG() << '\n';
    cout << "blue value: " << color1.getterB() << '\n';

    // using methods to speed up assignment/output of each value
    Color color2;
    color2.setterAll(232, 111, 40);
    color2.printAll();

    Color color3;
    color3.setterAll(54, 100, 140);
    color3.printAll();

    Color color4;
    color4.setterAll(24, 1, 30);
    color4.printAll();

    Color color5;
    color5.setterAll(98, 11, 210);
    color5.printAll();
}