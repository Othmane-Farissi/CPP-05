#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm {
    private: 
            std::string target;
    public:
            PresidentialPardonForm(std::string target);
            PresidentialPardonForm(const PresidentialPardonForm& src);
            PresidentialPardonForm& operator=(const PresidentialPardonForm& src);
            ~PresidentialPardonForm();

            void execute(const Bureaucrat &executor) const;
};

#endif