#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class   Form {
    private:
            const std::string name;
            bool isSigned;
            const int gToBeS;
            const int gToBeE;
    public:
            Form(std::string n , int gSigned, int execute);
            Form(const Form& src);
            Form& operator=(const Form& src);
            ~Form();

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
};

std::ostream&   operator<<(std::ostream& os, Form& form);

#endif