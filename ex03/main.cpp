#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
    try {
        Intern intern;

        AForm* shrubberyForm = intern.makeForm("ShrubberyCreationForm", "Home");
        AForm* robotomyForm = intern.makeForm("RobotomyRequestForm", "Target");
        AForm* pardonForm = intern.makeForm("PresidentialPardonForm", "Target");

        Bureaucrat bureaucrat("Othmane", 50);

        bureaucrat.signForm(*shrubberyForm);
        bureaucrat.signForm(*robotomyForm);
        bureaucrat.signForm(*pardonForm);

        bureaucrat.executeForm(*shrubberyForm);
        bureaucrat.executeForm(*robotomyForm);
        bureaucrat.executeForm(*pardonForm);

        delete shrubberyForm;
        delete robotomyForm;
        delete pardonForm;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}

