//Problem Solving with C++ Chapter 3 Programming Project 2

//Giving the angles of triangles

#include <iostream>

int main() {

	double side1, side2, side3; 

	int angle1, angle2, angle3;

	std::cout << "Please enter the three sides of the triangle.\n";

	std::cin >> side1 >> side2 >> side3;

	//print the three angles of the triangle depending on the type of triangle
	if (side1 == side2 == side3) {

		angle1 = 60;
		angle2 = 60;
		angle3 = 60;

		std::cout << angle1 << " " << angle2 << " " << angle3 << "\n";
	

	} else if (side1 != side2 && side1 != side3 && side2!=side3) {

		std::cout << "The triangle is scalene and all the angles are different.\n";

	} else {

		std::cout << "The triangle is isosceles! What size is the angle that is different to the other two?\n";
		std::cin >> angle1;

		angle2 = (180 - angle1)/2;
		angle3 = angle2;

		std::cout << angle1 << " " << angle2 << " " << angle3 << "\n";

	}

	return 0;
}
