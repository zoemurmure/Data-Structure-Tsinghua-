#include "rpn.h"

Operator optr2rank(char op) {
    switch(op) {
      case '+' : return ADD; //加
      case '-' : return SUB; //减
      case '*' : return MUL; //乘
      case '/' : return DIV; //除
      case '^' : return POW; //乘方
      case '!' : return FAC; //阶乘
      case '(' : return L_P; //左括号
      case ')' : return R_P; //右括号
      case '\0': return EOE; //起始符与终止符
      default  : exit ( -1 ); //未知运算符
    }
}

char orderBetween(char op1, char op2) {
    return pri[optr2rank(op1)][optr2rank(op2)];
}