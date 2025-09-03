# CPP-05

This repository contains the CPP-05 module from the C++ curriculum of the 42 Network pool. The module focuses on practicing advanced C++ object-oriented programming concepts, such as inheritance, exception handling, and the use of abstract classes. Each subdirectory (`ex00`, `ex01`, `ex02`, `ex03`) contains a separate exercise designed to explore and implement these concepts in increasing complexity.

## Table of Contents

- [Project Structure](#project-structure)
- [Exercises Overview](#exercises-overview)
- [How to Build and Run](#how-to-build-and-run)
- [Learning Objectives](#learning-objectives)
- [Author](#author)

## Project Structure

```
CPP-05/
├── ex00/
│   ├── Bureaucrat.cpp
│   ├── Bureaucrat.hpp
│   └── main.cpp
├── ex01/
│   ├── Bureaucrat.cpp
│   ├── Bureaucrat.hpp
│   ├── Form.cpp
│   ├── Form.hpp
│   └── main.cpp
├── ex02/
│   ├── Bureaucrat.cpp
│   ├── Bureaucrat.hpp
│   ├── AForm.cpp
│   ├── AForm.hpp
│   ├── RobotomyRequestForm.cpp
│   ├── RobotomyRequestForm.hpp
│   └── main.cpp
├── ex03/
│   ├── Bureaucrat.cpp
│   ├── Bureaucrat.hpp
│   ├── Intern.cpp
│   ├── Intern.hpp
│   ├── ShrubberyCreationForm.cpp
│   ├── ShrubberyCreationForm.hpp
│   ├── RobotomyRequestForm.cpp
│   ├── RobotomyRequestForm.hpp
│   ├── PresidentialPardonForm.cpp
│   ├── PresidentialPardonForm.hpp
│   └── main.cpp
```

## Exercises Overview

### ex00: Bureaucrat Basics
- **Focus:** Implementation of the `Bureaucrat` class with strict grade boundaries and custom exceptions.
- **Key Features:** Grade increment/decrement, exception handling for grade overflow/underflow.

### ex01: Forms and Bureaucrat
- **Focus:** Introduction of the `Form` class, interaction with `Bureaucrat`, and signature mechanics.
- **Key Features:** Signing forms, enforcing grade requirements, custom exceptions.

### ex02: Abstract Forms
- **Focus:** Abstract base class `AForm` and extension of form types (e.g., `RobotomyRequestForm`).
- **Key Features:** Polymorphism, execution of forms, enhanced exception management.

### ex03: Intern and Dynamic Form Creation
- **Focus:** The `Intern` class, which dynamically creates forms based on provided names.
- **Key Features:** Factory pattern for form instantiation, robust error handling for unknown form types.

## How to Build and Run

1. Clone the repository:
   ```bash
   git clone https://github.com/Othmane-Farissi/CPP-05.git
   cd CPP-05
   ```

2. Navigate to the exercise you want to build:
   ```bash
   cd ex00
   ```

3. Compile the sources (example for ex00):
   ```bash
   c++ -Wall -Wextra -Werror *.cpp -o ex00
   ```

4. Run the executable:
   ```bash
   ./ex00
   ```

_Repeat for ex01, ex02, ex03 as needed._

## Learning Objectives

- Understand and implement C++ inheritance and abstraction.
- Master exception handling and custom exception classes.
- Use polymorphism and abstract interfaces for extensible designs.
- Apply the Factory pattern for dynamic object creation.
- Practice robust error handling and input validation.

## Author

- [Othmane Farissi](https://github.com/Othmane-Farissi)

---

_This project is part of the 42 Network C++ curriculum._
