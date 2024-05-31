#pragma once

#include <iostream>
#include <string>
#include <exception>

#define	HIGHEST 1
#define	LOWEST 150

class Bureaucrat
{
	private:
	const std::string	_name;
	int					_grade;

	public:
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat	&operator=(const Bureaucrat &other);
	Bureaucrat(Bureaucrat const &other);
	
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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &f);