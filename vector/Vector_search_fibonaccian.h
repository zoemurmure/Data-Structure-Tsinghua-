#pragma once

#include "fibonacci/Fib.h"

template <typename T> static Rank fibSearch(T* S, T &const e, Rank lo, Rank hi) {
    Fib fib(hi - lo);
    while (lo < hi) {
        while (hi - lo < fib.get()) fib.prev();
        Rank mi = lo + fib.get() - 1;
        if (e < S[mi]) hi = mi;
        else lo = mi + 1;
    }
    return --lo;
}