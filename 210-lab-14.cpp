#include <iostream>

using namespace std;

class Colors {
public: 
    void setRed(int r) { this->red = r; }
    int getRed() {return red; }
    void setGreen(int g) {this->green = g; }
    int getGreen() {return green; }
    void setBlue(int b) {this->blue = b; }
    int getBlue() {return blue; }

private:
    int red, green, blue;

};

int main(){

    Colors color;

    return 0;
}