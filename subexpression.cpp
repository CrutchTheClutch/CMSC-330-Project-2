#include <iostream>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "plus.h"
#include "minus.h"
#include "times.h"
#include "divide.h"
#include "greaterthan.h"
#include "lessthan.h"
#include "equalto.h"
#include "andop.h"
#include "orop.h"
#include "conditional.h"
#include "negate.h"

SubExpression::SubExpression(Expression* left, Expression* right)
{
    this->left = left;
    this->right = right;
}


SubExpression::SubExpression(Expression *left, Expression *right, Expression *condition)
{
    this->left = left;
    this->right = right;
    this->condition = condition;
}

SubExpression::SubExpression(Expression* left)
{
    this->left = left;
}

Expression* SubExpression::parse()
{
    Expression* left;
    Expression* right;
    Expression* condition;
    char operation, paren, question;
    
    left = Operand::parse();
    cin >> operation;
    if (operation == '!'){
        cin >> paren;
        return new Negate(left);
    } else if (operation == ':'){
        right = Operand::parse();
        cin >> question;
        condition = Operand::parse();
        cin >> paren;
        return new Conditional(left, right, condition);
    } else {
        right = Operand::parse();
        cin >> paren;
    }


    switch (operation)
    {
        case '+':
            return new Plus(left, right);
        case '-':
            return new Minus(left, right);
        case '*':
            return new Times(left, right);
        case '/':
            return new Divide(left, right);
        case '>':
            return new GreaterThan(left, right);
        case '<':
            return new LessThan(left, right);
        case '=':
            return new EqualTo(left, right);
        case '&':
            return new AndOp(left, right);
        case '|':
            return new OrOp(left, right);
    }
    return 0;
}