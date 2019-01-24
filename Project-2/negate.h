class Negate: public SubExpression
{
public:
    Negate(Expression* left): SubExpression(left)
    {
    }
    int evaluate()
    {
        return !left->evaluate();
    }
};