#include <iostream>

class Rectangle {
private:
    int width;
    int height;

    int calculateArea() {
        return width * height;
    }

public:
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    int getWidth() {
        return width;
    }

    int getHeight() {
        return height;
    }

    void setDimensions(int newWidth, int newHeight) {
        width = newWidth;
        height = newHeight;
    }

    int getArea() {
        // Call the private helper function to calculate the area
        return calculateArea();
    }

    int calculatePerimeter() {
        return 2 * (width + height);
    }
};

int main() {
    Rectangle rect(5, 3);

    std::cout << "Width: " << rect.getWidth() << ", Height: " << rect.getHeight() << std::endl;

    // Error: 'int Rectangle::calculateArea()' is private within this context
    // std::cout << "Area: " << rect.calculateArea() << std::endl;

    // Instead, use the public member function that calls the private helper function.
    std::cout << "Area: " << rect.getArea() << std::endl;
    std::cout << "Perimeter: " << rect.calculatePerimeter() << std::endl;
/*1st commit*/
/*2nd commit*/
/*3rd commit*/
/*4th commit*/
/*5th commit */
    return 0;

}
