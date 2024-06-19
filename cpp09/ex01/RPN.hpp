#pragma once

#include <string>
#include <iostream>
#include <cmath>
#include <stack>
#include <algorithm>
#include <exception>


//The advantage of reverse Polish notation is that it removes the need 
//for order of operations and parentheses that are required by 
//infix notation and can be evaluated linearly, left-to-right. For example, 
//the infix expression (3 + 4) × (5 + 6) becomes 3 4 + 5 6 + × 

//Let's go through this step-by-step:

//     Read 3: Push onto stack → Stack: [3]
//     Read 4: Push onto stack → Stack: [3, 4]
//     Read +: Pop 4 and 3, calculate 3 + 4 = 7, push result → Stack: [7]
//     Read 5: Push onto stack → Stack: [7, 5]
//     Read 6: Push onto stack → Stack: [7, 5, 6]
//     Read +: Pop 6 and 5, calculate 5 + 6 = 11, push result → Stack: [7, 11]
//     Read ×: Pop 11 and 7, calculate 7 × 11 = 77, push result → Stack: [77]

// The final result is the only value remaining on the stack, which is 77.

class RPN : public std::stack<int>
{
	private:

	public:
    RPN();
    ~RPN();
    RPN(const RPN& other);
    RPN& operator=(const RPN& other);
};

