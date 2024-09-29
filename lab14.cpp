// COMSC-210 | lab 14 | Kent Kawashima
#include <iostream>
using namespace std;

// class declaration
class Color
{
private:
    int r, g, b;

public:
    // inline functions to get each private value, const to avoid loophole changes
    int getterR() const { return r; }
    int getterG() const { return g; }
    int getterB() const { return b; }

    // setter inline functions for each seperate variable
    void setterR(int value) { r = value; }
    void setterG(int value) { g = value; }
    void setterB(int value) { b = value; }

    // method to set all variables at once (due to custom constructors not having been introduced yet)
    void setterAll(int red, int green, int blue)
    {
        r = red;
        g = green;
        b = blue;
    }

    //method to print out all values of specified class, formatted neatly.
    void printAll() const // unsure if const needed here but method acts similarly to getter fucntions so I included
    {
        cout << "-------------\n"; // formatting
        cout << "red value: " << r << '\n';
        cout << "green value: " << g << '\n';
        cout << "blue value: " << b << '\n';
    }
};

/**************************************
 * Function: Main
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

    // using methods to speed up assignment/output of each subsequent object
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