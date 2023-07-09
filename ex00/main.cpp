#include "Bureaucrat.hpp"
#include <iostream>

int main() {
    try {
        Bureaucrat bureaucrat1("othmane1", 150);
        // Bureaucrat bureaucrat1("othmane1", 151);
        std::cout << bureaucrat1 << std::endl;

        bureaucrat1.incrementGrade();
        std::cout << bureaucrat1 << std::endl;

        bureaucrat1.decrementGrade();
        std::cout << bureaucrat1 << std::endl;

        Bureaucrat bureaucrat2("othmane2", 1);
        std::cout << bureaucrat2 << std::endl;

        bureaucrat2.incrementGrade();
    } catch (const Bureaucrat::GradeTooHighException& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    } catch (const Bureaucrat::GradeTooLowException& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
