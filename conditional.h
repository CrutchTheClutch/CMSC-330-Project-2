class Conditional: public SubExpression
{
public:
    Conditional(Expression* left, Expression* right, Expression* condition): SubExpression(left, right, condition)
    {
    }
    int evaluate()
    {
        if (condition->evaluate()) {
            return left->evaluate();
        }
        return right->evaluate();
    }
};