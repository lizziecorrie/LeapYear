//Problem Solving with C++ Chapter 4 Practice Program 1

//Converting between calculating miles per gallon a car delivered

//1 litre = 0.264179 gallons


#include <iostream>

void calculate_miles_per_gallon(double litres, double miles);

const double gallons_per_litre = 0.264179;


int main() {

	double num_of_litres = 0;
	double num_of_miles = 0;
	
	std::cout << "Please enter the number of litres your car has used.\n";

	std::cin >> num_of_litres;

	std::cout << "Please enter the number of miles your car has travelled.\n";

	std::cin >> num_of_miles;

	calculate_miles_per_gallon(num_of_litres, num_of_miles);

	return 0;

}

void calculate_miles_per_gallon(double litres, double miles) {
	
	double gallons = 0;
	double mpg = 0;

	//calculate gallons used
	gallons = litres*gallons_per_litre;

	//find miles per gallon
	mpg = miles/gallons;

	std::cout << "Your car delivered " << mpg << " miles per gallon.\n";

}
