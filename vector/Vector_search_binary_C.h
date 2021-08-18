#pragma once

template <typename T> static Rank binSearch(T *S, T &const e, Rank lo, Rank hi) {
    while (lo < hi) {
        Rank mi = (hi - lo) >> 2;
        if (e < S[mi]) hi = mi;
        else lo = mid + 1;
    }
    return --lo;
}