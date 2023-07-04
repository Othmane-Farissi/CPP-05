#include "Bureaucrat.hpp"
#include <iostream>

int main() {
    try {
        Bureaucrat bureaucrat1("othmane", 50);
        std::cout << bureaucrat1 << std::endl;

        bureaucrat1.incrementGrade();
        std::cout << bureaucrat1 << std::endl;

        bureaucrat1.decrementGrade();
        std::cout << bureaucrat1 << std::endl;

        Bureaucrat bureaucrat2("taha", 1);
        std::cout << bureaucrat2 << std::endl;

        bureaucrat2.incrementGrade();  // This should throw GradeTooHighException
    } catch (const Bureaucrat::GradeTooHighException& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    } catch (const Bureaucrat::GradeTooLowException& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
