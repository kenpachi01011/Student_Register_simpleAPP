#include<iostream>

class student {
public:
	std::string studentName;
	int studentID;
	float rateing;
	void Mystudent() {
		std::cout << "Enter student name\n";//print the text to the console.
		std::cin >> studentName;//get input from the user.
		std::cout << "Enter student ID\n";//print the text to the console.
		std::cin >> studentID;//get input from the user.
		std::cout << "Enter student rateing\n";//print the text to the console.
		std::cin >> rateing;//get input from the user.
		std::cout << "\a";
	}
};

class school : public student {//this class inherit from the parent class (student class).
public:
	void Myschool() {
		std::cout << studentName << std::endl << studentID << std::endl << rateing << "%\a" << std::endl;
	}
};
void options() {
	std::cout << "> Press 1 to sign student\n";//print the text to the console.
	std::cout << "> Press 2 to show students\n";
	std::cout << "> Press 3 To EXIT \n";
}
int main() {
	system("color 3");
	student STUDENT;//define the class.
	school SCHOOL;//define the class.
	int opt{};
	std::cout << "\t SCHOOL\n";
	do {
		options();
		std::cin >> opt;//get input from the user for option.
		switch (opt) {
		case 1:
			SCHOOL.Mystudent();
			break;
		case 2:
			SCHOOL.Myschool();
			break;
		case 3:
			std::cout << "Goodbye!";
			break;
		default:
			std::cout << "invalid option, try again!\n";//shows this to the console as a default value.
		}


	} while (opt != 3);//if user input 3 the loop breaks.
}
