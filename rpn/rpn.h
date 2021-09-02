#pragma once
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

#include "stack/stack.h"
#include "priority.h"

__int64 facI(int n);
double calcu(double a, char op, double b);
double calcu(char op, double b);
void displayProgress(char*, char*, Stack<double>&, Stack<char>&, char*);
void readNumber(char*&, Stack<double>&);
Operator optr2rank(char);
char orderBetween(char, char);
void append(char*&, double);
void append(char*&, char);
double evaluate(char* expr, char*& rpn);