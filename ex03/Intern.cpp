#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& src) {
    (void)src; 
}

Intern& Intern::operator=(const Intern& src) {
    (void)src; 
    return *this;
}

Intern::~Intern() {}

Form* Intern::makeForm(const std::string& formName, const std::string& target) const {
    Form* form = nullptr;

    if (formName == "presidential pardon")
        form = new PresidentialPardonForm(target);
    else if (formName == "robotomy request")
        form = new RobotomyRequestForm(target);
    else if (formName == "shrubbery creation")
        form = new ShrubberyCreationForm(target);
    else
        std::cout << "Error: Form " << formName << " doesn't exist." << std::endl;

    std::cout << "Intern creates " << formName << std::endl;

    return form;
}
