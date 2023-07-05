#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <fstream>
#include <iostream>
#include <exception>


class Bureaucrat {
        private:
                const std::string name;
                int m_grade;
        public:
                Bureaucrat(std::string n, int grade);           
                Bureaucrat(const Bureaucrat& src);
                Bureaucrat& operator=(const Bureaucrat& src);
                ~Bureaucrat();
        
                std::string getName() const;
                int getGrade() const;

                void    incrementGrade();
                void    decrementGrade();

                // void	signForm(Form form) const;

        class GradeTooLowException : public std::exception {   
                public: const char * what() const throw();
        };
        class GradeTooHighException : public std::exception {   
                public: const char * what() const throw();
        };
};



std::ostream&  operator<<(std::ostream& os, const Bureaucrat& bureaucrat);



#endif