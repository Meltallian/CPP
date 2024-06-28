#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

#define	HIGHEST 1
#define	LOWEST 150

class Bureaucrat;

class AForm
{
	private:

	const std::string	_name;
	bool				_signed;
	const int			_reqGradeToSign;
	const int			_reqGradeToExecute;

	public:

	AForm(std::string name, const int sign, const int execute);
	virtual ~AForm() = 0;
	AForm &operator=(const AForm &other);
	AForm(const AForm &other);

	class GradeTooHighException : public std::exception {
		public:
			const char *what() const throw();		
	};
	class GradeTooLowException : public std::exception {
		public:
			const char *what() const throw();
	};
	class NotSigned : public std::exception {
		public:
			const char *what() const throw();		
	};

	std::string	getName() const;
	bool		getSigned() const;
	int			getReqGradeToSign() const;
	int			getReqGradeToExecute() const;

	void	beSigned(const Bureaucrat &b);
	
	virtual void	execute(const Bureaucrat &executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, const AForm &f);