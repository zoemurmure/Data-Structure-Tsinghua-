#pragma once
// 没有解决分母为0的情况
template <typename T> static Rank interSearch(T *S, T &const e, Rank lo, Rank hi) {
    while (hi - lo > 1) {
        Rank mi = (e - S[lo]) / (S[hi-1] - S[lo]) * (hi - lo - 1) + lo;
        if (e < S[mi]) hi = mi;
        else if (S[mi] < e) lo = mi;
        else return mi;
    }
    return lo;
}