#include <iostream>

class Rectangle {
private:
    int width;
    int height;

    int calculateArea() {
        return width * height;
    }

public:
    // Constructor to initialize the dimensions of the rectangle
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    // Member function to get the width of the rectangle
    int getWidth() {
        return width;
    }

    // Member function to get the height of the rectangle
    int getHeight() {
        return height;
    }

    // Member function to set the dimensions of the rectangle
    void setDimensions(int newWidth, int newHeight) {
        width = newWidth;
        height = newHeight;
    }

    // Member function to calculate the perimeter of the rectangle
    int calculatePerimeter() {
        return 2 * (width + height);
    }
};

int main() {
    Rectangle rect(5, 3);

    // You can't access private members directly from outside the class
    // rect.width = 10; // Error: 'int Rectangle::width' is private within this context

    // You can only access public members from outside the class
    std::cout << "Width: " << rect.getWidth() << ", Height: " << rect.getHeight() << std::endl;
    std::cout << "Area: " << rect.calculateArea() << std::endl; // OK since calculateArea is called inside the class
    std::cout << "Perimeter: " << rect.calculatePerimeter() << std::endl;
    return 0;
}
