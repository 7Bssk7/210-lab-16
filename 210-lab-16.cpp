#include <iostream>
#include <iomanip>

using namespace std;

// This class "Color" represents an RGB color, it contains red, green and blue values
class Color{
public: 
    Color()                          { red = 0; green = 0; blue = 0; }
    Color(int r)                     { red = r; green = 0; blue = 0; }
    Color(int r, int g)              { red = r; green = g; blue = 0; }
    Color(int r, int g, int b)       { red = r; green = g; blue = b; }
    // Setter for the red value
    void setRed(int r) { this->red = r; }
    // Getter for the red value
    int getRed() const {return red; }
    // Setter for the green value
    void setGreen(int g) {this->green = g; }
    // Getter for the green value
    int getGreen() const {return green; }
    // Setter for the blue value 
    void setBlue(int b) {this->blue = b; }
    // Getter for the blue value
    int getBlue() const {return blue; }
    //Prints the color in the RGB format: (red value, green value, blue value)
    void print() const {
        cout << "RGB(" << red << ", " << green << ", " << blue << ")" << endl;
    }

private:
    // Private member variables for the RGB values(red, green, blue)
    int red, green, blue;

};

int main(){
    //This code creates four Color objects
    Color color1;
    Color color2;
    Color color3; 
    Color color4;
    Color color5;
    Color color6(41);
    Color color7(23,143);
    Color color8(123, 253, 213);

    //This code assigns RGB values to each Color object using setters
    color1.setRed(243);
    color1.setGreen(112);
    color1.setBlue(201);
    color2.setRed(123);
    color2.setGreen(234);
    color2.setBlue(50);
    color3.setRed(13);
    color3.setGreen(232);
    color3.setBlue(150);
    color4.setRed(0);
    color4.setGreen(255);
    color4.setBlue(0);

    //This code displays all of Color objects (colors)
    cout << setw(15) << "Colors" << endl; 
    cout << "Color #1: ";
    color1.print();
    cout << "Color #2: ";
    color2.print();
    cout << "Color #3: ";
    color3.print();
    cout << "Color #4: ";
    //This is just an example of using a getter for the class Color
    //This code outputs only the green value of RGB of color #4
    color4.print();
    cout << "Color #4 has only green value: " << color4.getGreen() << endl;

    return 0;
}