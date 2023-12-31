#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string n, int grade) : name(n) {
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    this->m_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : name(src.name) , m_grade(src.m_grade) {}


Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src) { 
    if (this != &src)
    {
        this->m_grade = src.m_grade;
    }
    return *this;
}

void    Bureaucrat::incrementGrade(){
    if (this->m_grade > 1)
        this->m_grade--;
    else
        throw GradeTooHighException();    
}

void    Bureaucrat::decrementGrade(){
    if (this->m_grade < 150)
        this->m_grade++;
    else
        throw GradeTooLowException();    
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

std::string Bureaucrat::getName() const {
    return (this->name);
}

int Bureaucrat::getGrade() const {
    return (this->m_grade);
}

void Bureaucrat::signForm(Form form) {
    try {
        form.beSigned(*this);
        std::cout << *this << " signed " << form << std::endl;
    } catch (const std::exception& e) {
        std::cout << *this << " couldn't sign " << form << " because " << e.what() << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ",  grade is " << bureaucrat.getGrade();
    return os;
}

Bureaucrat::~Bureaucrat() {}
