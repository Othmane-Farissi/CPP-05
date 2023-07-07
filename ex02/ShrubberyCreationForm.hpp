#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm {
    private:
            std::string target;
    public:
            ShrubberyCreationForm(std::string& target);
            ShrubberyCreationForm(const ShrubberyCreationForm& src);
            ShrubberyCreationForm& operator=(const ShrubberyCreationForm& src);
            ~ShrubberyCreationForm();
            
            void execute(const Bureaucrat &executor) const;
};

#endif