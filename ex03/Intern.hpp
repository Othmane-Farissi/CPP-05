#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern {
public:
    Intern();
    Intern(const Intern& src);
    Intern& operator=(const Intern& src);
    ~Intern();

    Form* makeForm(const std::string& formName, const std::string& target) const;
};

#endif
