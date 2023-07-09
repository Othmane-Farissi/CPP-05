#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
        Bureaucrat o1("othmane", 20);

        ShrubberyCreationForm shrubberyForm("Home");
        RobotomyRequestForm robotomyForm("Target");
        PresidentialPardonForm pardonForm("Target");

        o1.signForm(shrubberyForm);
        o1.signForm(robotomyForm);
        o1.signForm(pardonForm);

        o1.executeForm(shrubberyForm);
        o1.executeForm(robotomyForm);
        o1.executeForm(pardonForm);

    return 0;
}
