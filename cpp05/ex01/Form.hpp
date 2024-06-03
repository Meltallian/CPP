
#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

#define	HIGHEST 1
#define	LOWEST 150

class Bureaucrat;

class Form
{
	private:

	const std::string	_name;
	bool				_signed;
	const int			_reqGradeToSign;
	const int			_reqGradeToExecute;

	public:

	Form(std::string name, const int reqGradeToSign, const int reGradeToExecute);
	~Form();
	// Form &operator=(const Form &other);
	// Form(const Form &other);

	class GradeTooHighException : public std::exception {
		public:
			const char *what() const throw();		
	};
	class GradeTooLowException : public std::exception {
		public:
			const char *what() const throw();
	};

	std::string	getName() const;
	bool		getSigned() const;
	int			getReqGradeToSign() const;
	int			getReqGradeToExecute() const;

	void	beSigned(const Bureaucrat &b);
	
};

std::ostream &operator<<(std::ostream &out, const Form &form);