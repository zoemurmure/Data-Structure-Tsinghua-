#include "RPN.h"

double evaluate(char* S, char*& RPN) {
    Stack<double> opnd; Stack<char> optr;
    optr.push('\0');
    while(!optr.empty()) {
        if(isdigit(*S)) {
            readNumber(S, opnd);
            append(RPN, opnd.top());
        } else {
            switch(orderBetween(optr.top(), *S)) {
                case '<':
                    optr.push(*S); ++S;
                    break;
                case '=':
                    optr.pop(); ++S;
                    break;
                case '>':
                    char *op = optr.pop(); append(RPN, op);
                    if(op == '!') {
                        double pOpnd = opnd.pop();
                        opnd.push(calcu(op, pOpnd));
                    } else {
                        double pOpnd2 = opnd.pop(), pOpnd1 = opnd.pop();
                        opnd.push(calcu(pOpnd1, op, pOpnd2));
                    }
                    break;
                default:
                    exit(-1);
            }
        }
    }
    return opnd.pop();
}