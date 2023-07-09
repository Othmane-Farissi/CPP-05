#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <exception>

class ShrubberyCreationForm : public AForm {
    private:
            std::string target;
    public:
            ShrubberyCreationForm(std::string target);
            ShrubberyCreationForm(const ShrubberyCreationForm& src);
            ShrubberyCreationForm& operator=(const ShrubberyCreationForm& src);
            ~ShrubberyCreationForm();
            class OpenFileException : public std::exception {
                public: const char *what() const throw();
            };
            void execute(const Bureaucrat &executor) const;
};

#endif