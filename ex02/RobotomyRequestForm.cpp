#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy request form", 72, 45) , target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : AForm(src) , target(src.target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src) {
        if (this != &src) {
        target = src.target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

static int i = 0;

void    RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    if (!getIsSigned()){
        throw GradeTooLowException();
    }
    if (executor.getGrade() > getGradeToBeExecute()){
        throw GradeTooLowException();
    }
	if (!(i++ % 2))
		std::cout << "BRRRRRRRRRRRRRR => " << target << " was robotomized" << std::endl;
	else
		std::cout << "Robotomy failed" << std::endl;
}