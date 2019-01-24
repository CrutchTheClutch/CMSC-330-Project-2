class Minus: public SubExpression
{
public:
    Minus(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
       return left->evaluate() - right->evaluate();
    }
};
