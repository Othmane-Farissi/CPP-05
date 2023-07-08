#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Bureaucrat o1("othmane1", 20);
        Bureaucrat o2("othmane2", 120);

        ShrubberyCreationForm shrubberyForm("Home");
        RobotomyRequestForm robotomyForm("Target");
        PresidentialPardonForm pardonForm("Target");

        o1.signForm(shrubberyForm);
        o1.signForm(robotomyForm);
        o1.signForm(pardonForm);

        o1.executeForm(shrubberyForm);
        o1.executeForm(robotomyForm);
        o1.executeForm(pardonForm);

        // o2.executeForm(shrubberyForm);
        // o2.executeForm(robotomyForm);
        // o2.executeForm(pardonForm);
    } catch (const std::exception& e) {
        std::cout << "Exception occurred: " << e.what() << std::endl;
    }

    //  try {
    //     Bureaucrat johnDoe("John Doe", 50);
    //     ShrubberyCreationForm shrubberyForm("Home");

    //      johnDoe.signForm(shrubberyForm);
    //     johnDoe.executeForm(shrubberyForm);
    // } catch (const std::exception& e) {
    //     std::cout << "Exception occurred: " << e.what() << std::endl;
    // }

    return 0;
}
