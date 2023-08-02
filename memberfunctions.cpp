#include <iostream>

struct Rectangle {
    int width;
    int height;

    // Member function to calculate the area of the rectangle
    int calculateArea() {
        return width * height;
    }

    // Member function to calculate the perimeter of the rectangle
    int calculatePerimeter() {
        return 2 * (width + height);
    }

    // Member function to set the dimensions of the rectangle
    void setDimensions(int newWidth, int newHeight) {
        width = newWidth;
        height = newHeight;
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(5, 3);
    std::cout << "Width: " << rect.width << ", Height: " << rect.height << std::endl;
    std::cout << "Area: " << rect.calculateArea() << std::endl;
    std::cout << "Perimeter: " << rect.calculatePerimeter() << std::endl;
    return 0;
}
