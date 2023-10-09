// Dz 09.10.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

class Square {
protected:
    double side;
public:
    Square(double size) : side(size) {}
    double getSide() const {
        return side;
    }
};

class Circle {
protected:
    double diameter;
public:
    Circle(double size) : diameter(size) {}
    double getDiameter() const {
        return diameter;
    }
};

class CircleInscribedInSquare : public Square, public Circle {
public:
    CircleInscribedInSquare(double squareSide, double circleDiameter): Square(squareSide), Circle(circleDiameter) {}

    void Print() const{
        if (getDiameter() <= getSide()) {
            cout << "Circle is inscribed in the square." << endl;
        }
        else {
            cout << "It is impossible to fit a circle into a square because the diameter of the circle is greater than the length of the square." << endl;
        }
    }
};

int main() {
    double squareSide, circleDiameter;

    cout << "Enter the length of the square side: ";
    cin >> squareSide;
    cout << "Enter the diameter of the circle: ";
    cin >> circleDiameter;

    CircleInscribedInSquare obj(squareSide, circleDiameter);
    obj.Print();
}

	// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
	// Debug program: F5 or Debug > Start Debugging menu

	// Tips for Getting Started: 
	//   1. Use the Solution Explorer window to add/manage files
	//   2. Use the Team Explorer window to connect to source control
	//   3. Use the Output window to see build output and other messages
	//   4. Use the Error List window to view errors
	//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
	//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file