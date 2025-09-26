#include <iostream>
#include <iomanip>

using namespace std;

class Colors {
public: 
    void setRed(int r) { this->red = r; }
    int getRed() {return red; }
    void setGreen(int g) {this->green = g; }
    int getGreen() {return green; }
    void setBlue(int b) {this->blue = b; }
    int getBlue() {return blue; }

    void print(){
        cout << "Red: #" << red << " " << "Green: #" << green << " " << "Blue: #" << blue << endl;
    }

private:
    int red, green, blue;

};

int main(){

    Colors color1;
    Colors color2;
    Colors color3; 

    color1.setRed(243);
    color1.setGreen(112);
    color1.setBlue(201);

    color2.setRed(123);
    color2.setGreen(234);
    color2.setBlue(50);

    color3.setRed(13);
    color3.setGreen(232);
    color3.setBlue(150);

    cout << setw(18) << "Colors:" << endl; 
    cout << "Color #1: ";
    color1.print();
    cout << "Color #2: ";
    color2.print();
    cout << "Color #3: ";
    color3.print();



    return 0;
}