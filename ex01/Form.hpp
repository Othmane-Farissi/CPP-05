#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <exception>

class   Form {
    private:
            const std::string name;
            bool isSigned;
            const int gradeToBeSigned;
            const int gradeToBeExecute;
    public:
            Form(std::string n, bool isHeSigned, int signed, int execute);
            Form(const Form& src);
            Form& operator=(const Form& src);
            ~Form();

            class GadeTooLowException : public std::exception{
                public: const char * what() const throw();
            };
            class GradeTooHighException : public std::exception {   
                public: const char * what() const throw();
            };

            std::string getName() const;
            int getGradeToBeSigned() const;
            int getGradeToBeExecute() const;

            void	beSigned(Bureaucrat& bureaucrat);
};

#endif