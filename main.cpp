#include "Expression.h"
#include <iostream>
#include<memory>
using namespace calc;
using namespace std;



int main() {
    ExpPtr x;
    ExpPtr y;

/******************
ADDITION TEST
*******************/

    cout <<endl<< "Addition Test:" << endl<<endl;

    cout << "Test 1: 3 + 5 = ";

    ExpPtr AddTest1 = BinaryOperation::Add(x->Expression::Literal(3), y->Expression::Literal(5));
    cout << AddTest1 ->evaluate() << endl;

    if (AddTest1->evaluate() == 8)
        cout << "Test 1: PASSED" << endl << endl;
    else
        cout << "Test 1: FAILED" << endl << endl;


    cout << "Test 2: 3 + 4 + 5 = ";

    ExpPtr AddTest2 = BinaryOperation::Add(x->Expression::Literal(3 + 4), y->Expression::Literal(5));
    cout << AddTest2->evaluate() << endl;

    if (AddTest2->evaluate() == 12)
        cout << "Test 2: PASSED" << endl << endl;
    else
        cout << "Test 2: FAILED" << endl << endl;


    cout << "Test 3: 3 + 4 + 5 + 6 = ";

    ExpPtr AddTest3 = BinaryOperation::Add(x->Expression::Literal(3 + 4), y->Expression::Literal(5 + 6));
    cout << AddTest3->evaluate() << endl;

    if (AddTest3->evaluate() == 18)
        cout << "Test 3: PASSED" << endl << endl;
    else
        cout << "Test 3: FAILED" << endl << endl ;

    cout << "Test 4: 3.43 + 4.532 + 5.754 + 6.354 = ";

    ExpPtr AddTest4 = BinaryOperation::Add(x->Expression::Literal(3.43 + 4.532), y->Expression::Literal(5.754 + 6.354));
    cout << AddTest4->evaluate() << endl;

    if (AddTest4->evaluate() == 20.07)
        cout << "Test 4: PASSED" << endl << endl;
    else
        cout << "Test 4: FAILED" << endl << endl;



/******************
SUBTRACTION TEST
*******************/



cout << endl << "Subtraction Test:" << endl << endl;

cout << "Test 1: 3 - 5 = ";

ExpPtr SubTest1 = BinaryOperation::Subtract(x->Expression::Literal(3), y->Expression::Literal(5));
cout << SubTest1->evaluate() << endl;

if (SubTest1->evaluate() == -2)
    cout << "Test 1: PASSED" << endl << endl;
else
    cout << "Test 1: FAILED" << endl << endl;


cout << "Test 2: 3 - 4 - 5 = ";

ExpPtr SubTest2 = BinaryOperation::Subtract(x->Expression::Literal(3 - 4), y->Expression::Literal(5));
cout << SubTest2->evaluate() << endl;

if (SubTest2->evaluate() == -6)
    cout << "Test 2: PASSED" << endl << endl;
else
    cout << "Test 2: FAILED" << endl << endl;


cout << "Test 3: 3 - 4 - 5 - 6 = ";

ExpPtr SubTest3 = BinaryOperation::Subtract(x->Expression::Literal(3 - 4 - 5), y->Expression::Literal(6));
cout << SubTest3->evaluate() << endl;

if (SubTest3->evaluate() == -12)
    cout << "Test 3: PASSED" << endl << endl;
else
    cout << "Test 3: FAILED" << endl << endl;

cout << "Test 4: 3.43 - 4.532 - 5.754 - 6.354 = ";

ExpPtr SubTest4 = BinaryOperation::Subtract(x->Expression::Literal(3.43 - 4.532 - 5.754), y->Expression::Literal(6.354));
cout << SubTest4->evaluate() << endl;

if (SubTest4->evaluate() == -13.21)
    cout << "Test 4: PASSED" << endl << endl;
else
    cout << "Test 4: FAILED" << endl << endl;



/******************
Multiplication TEST
*******************/



cout << endl << "Multiplication Test:" << endl << endl;

cout << "Test 1: 3 * 5 = ";

ExpPtr MultTest1 = BinaryOperation::Multiply(x->Expression::Literal(3), y->Expression::Literal(5));
cout << MultTest1->evaluate() << endl;

if (MultTest1->evaluate() == 15)
    cout << "Test 1: PASSED" << endl << endl;
else
    cout << "Test 1: FAILED" << endl << endl;


cout << "Test 2: 3 * 4 * 5 = ";

ExpPtr MultTest2 = BinaryOperation::Multiply(x->Expression::Literal(3 * 4), y->Expression::Literal(5));
cout << MultTest2->evaluate() << endl;

if (MultTest2->evaluate() == 60)
    cout << "Test 2: PASSED" << endl << endl;
else
    cout << "Test 2: FAILED" << endl << endl;


cout << "Test 3: 3 * 4 * 5 * 6 = ";

ExpPtr MultTest3 = BinaryOperation::Multiply(x->Expression::Literal(3 * 4), y->Expression::Literal(5 * 6));
cout << MultTest3->evaluate() << endl;

if (MultTest3->evaluate() == 360)
    cout << "Test 3: PASSED" << endl << endl;
else
    cout << "Test 3: FAILED" << endl << endl;



/******************
Division TEST
*******************/



cout << endl << "Division Test:" << endl << endl;

cout << "Test 1: 9 / 3 = ";

ExpPtr DivTest1 = BinaryOperation::Divide(x->Expression::Literal(9), y->Expression::Literal(3));
cout << DivTest1->evaluate() << endl;

if (DivTest1->evaluate() == 3)
    cout << "Test 1: PASSED" << endl << endl;
else
    cout << "Test 1: FAILED" << endl << endl;


cout << "Test 2: 4 / 0.5 / 0.5 = ";

ExpPtr DivTest2 = BinaryOperation::Divide(x->Expression::Literal(4 / 0.5), y->Expression::Literal(0.5));
cout << DivTest2->evaluate() << endl;

if (DivTest2->evaluate() == 16)
    cout << "Test 2: PASSED" << endl << endl;
else
    cout << "Test 2: FAILED" << endl << endl;


cout << "Test 3: 6 / 2 / 2 / 1 = ";

ExpPtr DivTest3 = BinaryOperation::Divide(x->Expression::Literal(6 / 2), y->Expression::Literal(2 / 1));
cout << DivTest3->evaluate() << endl;

if (DivTest3->evaluate() == 1.5)
    cout << "Test 3: PASSED" << endl << endl;
else
    cout << "Test 3: FAILED" << endl << endl;
}
