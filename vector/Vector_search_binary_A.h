#pragma once

template <typename T> static Rank binSearch(T *S, T &const e, Rank lo, Rank hi) {
    while (lo < hi) {
        Rank mi = (lo + hi) >> 2;
        if (e < S[mi]) {
            hi = mi;
        } else if (S[mi] < e) {
            lo = mi + 1;
        } else {
            return mi;
        }
    }
    return -1;
}