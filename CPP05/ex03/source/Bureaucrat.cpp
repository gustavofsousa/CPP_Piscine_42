#include "../include/Bureaucrat.hpp"

/*
** --------------------------- CONSTRUCTOR & DESTRUCTOR -----------------------------
*/
Bureaucrat::Bureaucrat( void ) : _name("John Wick")
{
	this->_grade = 150;	
}

Bureaucrat::Bureaucrat( std::string newName, int grade) : _name(newName)
{
	if (grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw(Bureaucrat::GradeTooLowException());
	this->_grade = grade;
}

Bureaucrat::Bureaucrat( Bureaucrat const& other )
{
	this->_name = other._name;
	this->_grade = other._grade;
}

Bureaucrat::~Bureaucrat() { }

/*
** --------------------------------- OVERLOAD ---------------------------------
*/
Bureaucrat&			Bureaucrat::operator=( Bureaucrat const& other )
{
	if ( this != &other )
	{
		this->_name = other._name;
		this->_grade = other._grade;
	}
	return *this;
}

/*
**	------------------------- GETTERS ------------------------
*/
std::string			Bureaucrat::getName( void ) const
{
	return this->_name;
}

int					Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void				Bureaucrat::incrementGrade( void )
{
	if (this->_grade == 1)
		throw(Bureaucrat::GradeTooHighException());
	std::cout << CYAN << "Incrementing " << this->_name << "'s grade" << RESET << std::endl;
	this->_grade--;
}

void				Bureaucrat::decrementGrade( void )
{
	if (this->_grade == 150)
		throw(Bureaucrat::GradeTooLowException());
	std::cout << CYAN << "Decrementing " << this->_name << "'s grade" << RESET << std::endl;
	this->_grade++;
}

void				Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << GREEN << this->getName() << " signs " << form.getName() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << this->getName() << " cannot sign " << form.getName() << " because " << e.what() << RESET << std::endl;
	}
}

void				Bureaucrat::executeForm(AForm const& form)
{
	try
	{
		form.action(*this);
		std::cout << GREEN << this->getName() << " executes " << form.getName() << RESET << std::endl;
	}
	catch (std::exception const& e)
	{
		std::cerr << RED << this->getName() << " cannot execute " << form.getName() << " because " << e.what() << RESET << std::endl;
	}
}

/*
**	---------------------------- CUSTOMS EXCEPTIONS ---------------------------
*/
const char*			Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return (RED "Grade is too low" RESET);
}

const char*			Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return (RED "Grade is too high" RESET);
}

/*
**	---------------------------- GLOBAL OVERLOAD ---------------------------
*/
std::ostream&		operator<<( std::ostream& o, Bureaucrat const& person)
{
	o << person.getName() << ", bureaucrat grade " << person.getGrade() << ".";
	return o;
}