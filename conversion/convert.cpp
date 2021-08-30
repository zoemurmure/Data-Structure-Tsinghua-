#include "convert.h"

void convert(Stack<char>& S, __int64 n, int base) {
    char digit[] = "0123456789ABCDEF";
    while (0 < n) {
        S.push(digit[n % base]);
        n /= base;
    }
}