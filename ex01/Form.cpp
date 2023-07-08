#include "Form.hpp"

Form::Form(std::string n, bool isSigned, int gSigned, int execute) : name(n) , isSigned(false) , gToBeS(gSigned) , gToBeE(execute)
{
    if (this->gToBeS < 1 || this->gToBeE < 1)
        throw GradeTooHighException();
    else if (this->gToBeS > 150 || this->gToBeE > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& src) : name(src.name) , isSigned(false) , gToBeS(src.gToBeS), gToBeE(src.gToBeE) {}

Form&   Form::operator=(const Form& src)
{
    if (this != &src)
    {
        this->isSigned = src.isSigned;
    }
    return *this;
}

Form::~Form() {}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too Low");
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too High");
}

std::string Form::getName() const{
    return (this->name);
}

int Form::getGradeToBeSigned () const {
    return (this->gToBeS);
}

int Form::getGradeToBeExecute () const {
    return (this->gToBeE);
}

bool    Form::getIsSigned() const {
    return this->isSigned;
}

void Form::beSigned(Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() <= this->gToBeS)
        this->isSigned = true;
    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Form& form) {
    os << "Form: " << form.getName() << ", Signed: ";
    if (form.getIsSigned() == true) {
        os << "Yes";
    } else {
        os << "No";
    }
    os << ", Grade Required to Sign: " << form.getGradeToBeSigned();
    return os;
}


