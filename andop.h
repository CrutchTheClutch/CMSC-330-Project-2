class AndOp: public SubExpression
{
public:
    AndOp(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
        return left->evaluate() && right->evaluate();
    }
};