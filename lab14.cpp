#include <iostream>
using namespace std;

class Color 
{
private:
    int r,g,b;

public:
    int getterR()const{return r;} //inline functions, const to avoid loophole changes
    int getterG()const{return g;} 
    int getterB()const{return b;} 

    void setterR(int value){r = value;} //setter inline for seperate
    void setterG(int value){g = value;}
    void setterB(int value){b = value;}

    void setterAll(int red, int green, int blue){ r = red; g = green; b = blue;}//or setter for each var (due to custom constructors not having been introduced yet)
    
    void printAll()
    {
        cout << "red value: " << r << '\n';
        cout << "green value: " << g << '\n';
        cout << "blue value: " << b << '\n';
    }
};

int main()
{
    Color test;
    test.setterB(234);
    cout << test.getterB(); //okay working 
}