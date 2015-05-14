//C++ Derived Class Program
/* Instructions:
Create a “base class” that contains two protected variables and three public functions (input,
calculate, and output). The “base class” inputs required data and calculates area for the
rectangle.
Create a “derived class” that contains one protected variable and three public functions (input,
calculate, and output). The” derived class” MUST use the length and width data values in the
“base class” to calculate the volume of the cube.
Write a “main()” function that demonstrates the use of the classes and their functions.
*/

#include <iostream>
using namespace std;

class Rectangle
{
	protected:
		int length,
			width;
	public:
		void input(double length, double width)
		{
			/*Using the "this" pointer to access of members of the object 
              class, letting us define the protected variables */
            		this->length = length;
			this->width = width;
		}
		int calculate()
		{
			return length * width;
		}
		void output()
		{
			cout << "*** RECTANGLE DATA ***" << endl;
			cout << "Length is " << length << endl;
			cout << "Width is " << width << endl;
			cout << "Area of the rectangle is " << this->calculate();
		}
};
//Cube is the derived class, rectangle is the base class
//Derived class Cube contains all members of the base class, such as width
class Cube: public Rectangle
{
	protected:
		int height;
	public:
		void input(int height)
		{
			this->height = height;
		}
		int calculate()
		{
			return height*width*length;
		}
		void output()
		{
			cout << "*** CUBE DATA ***" << endl;
			cout << "Length is " << length << endl;
			cout << "Width is " << width << endl;
			cout << "Height is " << height << endl;
			cout << "Volume is " << this->calculate();
		}
};

int main() {
	cout << "This program calculates the area of a rectangle\nand "
		<< "the volume of a cube.\n\n";
	int len, wid, hgt;
	//Create a Cube object to use all three variables
	Cube myShape;
	cout << "Enter length: ";
	cin >> len;
	cout << "Enter width: ";
	cin >> wid;
	cout << "Enter height: ";
	cin >> hgt;
	//Use object.Class::method() to access the classes methods
	myShape.Rectangle::input(len, wid);
	cout << "\n\n";
	myShape.Rectangle::output();
	myShape.Cube::input(hgt);
	cout << "\n\n\n";
	myShape.Cube::output();
	cout << "\n\n\n\n";
	//system("pause");
	return 0;
}
