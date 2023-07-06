#include "Bureaucrat.hpp"
#include "Form.hpp"


int main() {
    try {
        // Create a Bureaucrat
        Bureaucrat bureaucrat("Ana", 50);
        std::cout << bureaucrat << std::endl;

        // Increment and decrement the grade
        bureaucrat.incrementGrade();
        std::cout << "Incremented grade: " << bureaucrat.getGrade() << std::endl;
        bureaucrat.decrementGrade();
        std::cout << "Decremented grade: " << bureaucrat.getGrade() << std::endl;

        // Create a Form
        Form form("Form 1", 75, 100);
        std::cout << form << std::endl;

        // Sign the form
        bureaucrat.signForm(form);

        // Attempt to sign the form with a low-grade bureaucrat
        Bureaucrat lowGradeBureaucrat("chi wahed", 120);
        lowGradeBureaucrat.signForm(form);
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

