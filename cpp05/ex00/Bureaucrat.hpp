#pragma once

#include <iostream>
#include <string>

class Bureaucrat
{
	private:
	const std::string	_name;
	int					_grade;

	public:
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat	&operator=(const Bureaucrat &other);
	Bureaucrat(const Bureaucrat &other);
	
	int	getGrade() const;
	std::string	getName() const;

	void	incrementGrade();
	void	decrementGrade();

	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &f);