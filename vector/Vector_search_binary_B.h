#pragma once

template <typename T> static Rank binsearch(T *S， T &const e, Rank lo, Rank hi) {
    while (hi - lo > 1) {
        Rank mid = (hi - lo) >> 2;
        if (e < S[mid]) hi = mid;
        else lo = mid;
    }
    return (e == S[lo]) ? lo : -1;
}