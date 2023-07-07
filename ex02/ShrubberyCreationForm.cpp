#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string& target) : AForm("Shrubbery Form", false, 145, 137) , target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) : AForm(src) , target(src.target) {}

ShrubberyCreationForm&   ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src) {
    if (this != &src)
    {
        target = src.target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void    ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    if (!getIsSigned())
        throw GradeTooLowException();
    if (executor.getGrade() < getGradeToBeExecute())
        throw GradeTooLowException();
    std::ofstream file(target + "_shrubbery");
    if (file.is_open())
        file << "ASCCI Trees ." << std::endl;
    // add throw exception
}