#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {

        Intern intern;

        AForm* shrubberyForm = intern.makeForm("shrubbery creation", "Home");
        AForm* robotomyForm = intern.makeForm("robotomy request", "Target");
        AForm* pardonForm = intern.makeForm("presidential pardon", "Target");

        Bureaucrat bureacrat("Othmane", 50);

        bureacrat.signForm(*shrubberyForm);
        bureacrat.signForm(*robotomyForm);
        bureacrat.signForm(*pardonForm);

        bureacrat.executeForm(*shrubberyForm);
        bureacrat.executeForm(*robotomyForm);
        bureacrat.executeForm(*pardonForm);

        delete shrubberyForm;
        delete robotomyForm;
        delete pardonForm;

    return 0;
}
