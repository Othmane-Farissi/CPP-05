#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class   AForm {
    private:
            const std::string name;
            bool isSigned;
            const int gToBeS;
            const int gToBeE;
    public:
            AForm(std::string n , int gSigned, int execute);
            AForm(const AForm& src);
            AForm& operator=(const AForm& src);
            virtual ~AForm();

            class GradeTooLowException : public std::exception{
                public: const char * what() const throw();
            };
            class GradeTooHighException : public std::exception {   
                public: const char * what() const throw();
            };

            std::string getName() const;
            int getGradeToBeSigned() const;
            int getGradeToBeExecute() const;
            bool getIsSigned() const;

            void	beSigned(Bureaucrat& bureaucrat);
            virtual void execute(Bureaucrat const & executor) const = 0;

};

std::ostream&   operator<<(std::ostream& os, const AForm& form);

#endif