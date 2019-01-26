class Plus: public SubExpression
{
public:
    Plus(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    double evaluate()
    {
       return left->evaluate() + right->evaluate();
    }
};