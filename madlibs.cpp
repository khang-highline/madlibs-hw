#include <iostream>
#include <string>

int main()
{
	// prompt
	std::string name;
	std::cout << "Enter a name: ";
	getline(std::cin, name);
	std::string country;
	std::cout << "Enter a location: ";
	getline(std::cin, country);
	std::string degree;
	std::cout << "Enter a degree: ";
	getline(std::cin, degree);
	std::string major;
	std::cout << "Enter a major: ";
	getline(std::cin, major);
	std::string school;
	std::cout << "Enter a school: ";
	getline(std::cin, school);
	std::string title;
	std::cout << "Enter a job: ";
	getline(std::cin, title);
	std::string field;
	std::cout << "Enter a work field: ";
	getline(std::cin, field);
	std::string hobby1;
	std::cout << "Enter hobby 1 (verb): ";
	getline(std::cin, hobby1);
	std::string hobby2;
	std::cout << "Enter hobby 2 (verb): ";
	getline(std::cin, hobby2);
	std::string hobby3;
	std::cout << "Enter hobby 3 (verb): ";
	getline(std::cin, hobby3);
	std::cout << "\n\n";
	// output
	std::cout << "My name is " << name << ". \n"
	          << "I'm from " << country << ". \n"
	          << "I'm doing a/an " << degree << " in " << major << " at "
	          << school << ". \n"
	          << "I want to become a/an " << title << " in the " << field
	          << " field.\n"
	          << "In my free time, I like to " << hobby1 << ", " << hobby2
	          << ", and " << hobby3 << ".\n";
	return 0;
}
