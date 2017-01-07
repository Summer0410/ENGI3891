
#include "Expression.h"
using namespace calc;

ExpPtr Expression::Literal(double d) {
    ExpPtr expPtr(new BinaryOperation(d));
    return expPtr;
}

BinaryOperation::BinaryOperation(double d) {
    this->val = d;
}
// Constructor of the BinaryOperation subclass
BinaryOperation::BinaryOperation(ExpPtr lhs, ExpPtr rhs) {
    left.reset(lhs.get());
    right.reset(rhs.get());
}
//override of the evaluate method
double BinaryOperation::evaluate() const {
    return val;
}

//! Construct an operation that will add two expressions together.
ExpPtr BinaryOperation::Add(ExpPtr lhs, ExpPtr rhs){
    return ExpPtr(new BinaryOperation(lhs->evaluate() + rhs->evaluate()));
}

//! Construct an operation to subtract two expressions.
ExpPtr BinaryOperation::Subtract(ExpPtr lhs, ExpPtr rhs){
    return ExpPtr(new BinaryOperation(lhs->evaluate() - rhs->evaluate()));
}

//! Construct an operation to multiply two expressions.
ExpPtr BinaryOperation::Multiply(ExpPtr lhs, ExpPtr rhs){
    return ExpPtr(new BinaryOperation(lhs->evaluate() * rhs->evaluate()));
}

//! Construct an operation to divide two expressions.
ExpPtr BinaryOperation::Divide(ExpPtr lhs, ExpPtr rhs){
    return ExpPtr(new BinaryOperation(lhs->evaluate() / rhs->evaluate()));
}