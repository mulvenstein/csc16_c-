#include <iostream>
#include<sstream>
#include<cstdlib>
using namespace std;

#include "Stack.h"

int evalExpression(char operator_, int operandA, int operandB)
{
	switch(operator_)
	{
	// your code her
		case '+':
		  return operandB + operandA;
		break;
		case '*':
		  return operandB * operandA;
		break;
		case '-' :
		  return operandB-operandA;
		break;
		case '/' :
		  return operandB / operandA ;
		break;
	}
}

void handleOperand(stringstream& strStream, Stack& rpnStack)
{
	// your code here
	int operand;
	strStream>>operand;
	rpnStack.push(operand);
}

void handleOperator(stringstream& strStream, Stack& rpnStack)
{
	// your code here
	int operandA = rpnStack.top();
	rpnStack.pop();
	int operandB = rpnStack.top();
	rpnStack.pop();
	char operator_;
	strStream>>operator_;
	int result = evalExpression(operator_,operandA, operandB);
	rpnStack.push(result);
}

int main()
{
	Stack rpnStack;
	cout<<"Enter a postfix expression"<<endl;
	string expStr;
	getline(cin,expStr,'\n');
	stringstream strStream(expStr);
	while(!strStream.eof())
	{
		int ch = strStream.peek();
		if(std::isspace(ch))
		{
		  strStream.ignore(1);
		  continue;
		}
		else
		if(std::isdigit(ch))
		{
			handleOperand(strStream, rpnStack);
		}
		else
		if(std::isgraph(ch))
		{
			handleOperator(strStream, rpnStack);
		}
	}

	// end of expression
	cout<<"The evaluated expression is: "<<rpnStack.top()<<endl;
}
