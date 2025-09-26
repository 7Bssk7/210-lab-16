#include <iostream>
#include <iomanip>

using namespace std;

class Color{
public: 
    void setRed(int r) { this->red = r; }
    int getRed() {return red; }
    void setGreen(int g) {this->green = g; }
    int getGreen() {return green; }
    void setBlue(int b) {this->blue = b; }
    int getBlue() {return blue; }

    void print(){
        cout << "RGB(" << red << ", " << green << ", " << blue << ")" << endl;
    }

private:
    int red, green, blue;

};

int main(){

    Color color1;
    Color color2;
    Color color3; 
    Color color4;


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

    cout << setw(18) << "Colors:" << endl; 
    cout << "Color #1: ";
    color1.print();
    cout << "Color #2: ";
    color2.print();
    cout << "Color #3: ";
    color3.print();
    cout << "Color #4: ";
    color4.print();
    cout << "Color #4 has only green value: " << color4.getGreen() << endl;



    return 0;
}