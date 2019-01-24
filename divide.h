class Divide: public SubExpression
{
public:
    Divide(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
        return left->evaluate() / right->evaluate();
    }
};
