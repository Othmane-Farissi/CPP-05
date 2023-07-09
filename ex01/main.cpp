#include "Bureaucrat.hpp"
#include "Form.hpp"


int main() {
        Bureaucrat bureaucrat("Ana", 50);
        std::cout << bureaucrat << std::endl;

        bureaucrat.incrementGrade();
        std::cout << "Incremented grade: " << bureaucrat.getGrade() << std::endl;
        bureaucrat.decrementGrade();
        std::cout << "Decremented grade: " << bureaucrat.getGrade() << std::endl;

        Form form("Form 1", 75, 100);
        std::cout << form << std::endl;

        bureaucrat.signForm(form);

        Bureaucrat lowGradeBureaucrat("chi wahed", 120);
        lowGradeBureaucrat.signForm(form);
    

    return 0;
}

