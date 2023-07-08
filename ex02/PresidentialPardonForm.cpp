#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Pardon form", 25, 5) , target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : AForm(src) , target(src.target) {}

PresidentialPardonForm&  PresidentialPardonForm::operator=(const PresidentialPardonForm& src) {
    if (this != &src)
    {
        target = src.target;
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void    PresidentialPardonForm::execute(const Bureaucrat& executor) const {
    if (!getIsSigned())
        throw GradeTooLowException();
    if (executor.getGrade() > getGradeToBeExecute())
        throw GradeTooLowException();
    std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}