#include <iostream>
#include <string>

// Project 1 - Andy Munoz
// CIS 5 Week 04 - Student Card

int main() {
	const int CURRENT_YEAR = 2026;
	std::string first;
	int age;
	int credits;
	double gpa;
	int transfer_year = CURRENT_YEAR + 1;

	std::cout << "First? ";
	std::cin >> first;
	std::cout << "Age? ";
	std::cin >> age;
	std::cout << "Credits this term? ";
	std::cin >> credits;
	std::cout << "GPA? ";
	std::cin >> gpa;

	std::cout << "=== Student Card ===";
	std::cout << "\nFirst: " << first << "\nAge: " << age << "\nCredits: " << credits << "\nGPA: " << gpa << "\nExpcected Transfer: " << transfer_year;
	return 0;

}
