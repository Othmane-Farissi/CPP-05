#include "AForm.hpp"

AForm::AForm(std::string n, bool isSigned, int gSigned, int execute) : name(n) , isSigned(false) , gToBeS(gSigned) , gToBeE(execute)
{
    if (this->gToBeS < 1 || this->gToBeE < 1)
        throw GradeTooHighException();
    else if (this->gToBeS > 150 || this->gToBeE > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm& src) : name(src.name) , isSigned(false) , gToBeS(src.gToBeS), gToBeE(src.gToBeE) {}

AForm&   AForm::operator=(const AForm& src)
{
    if (this != &src)
    {
        this->isSigned = src.isSigned;
    }
    return *this;
}

AForm::~AForm() {}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("Grade is too Low");
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("Grade is too High");
}

std::string AForm::getName() const{
    return (this->name);
}

int AForm::getGradeToBeSigned () const {
    return (this->gToBeS);
}

int AForm::getGradeToBeExecute () const {
    return (this->gToBeE);
}

bool    AForm::getIsSigned() const {
    return this->isSigned;
}

void AForm::beSigned(Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() <= this->gToBeS)
        this->isSigned = true;
    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const AForm& form) {
    os << "AForm: " << form.getName() << ", Signed: ";
    if (form.getIsSigned() == true) {
        os << "Yes";
    } else {
        os << "No";
    }
    os << ", Grade Required to Sign: " << form.getGradeToBeSigned();
    return os;
}


