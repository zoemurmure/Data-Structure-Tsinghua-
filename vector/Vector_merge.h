#pragma once

template <typename T> 
void Vector<T>::merge(Rank lo, Rank mi, Rank hi) {
    Rank i = 0; T *A = _elem + lo;
    Rank j = 0; int lb = mi - lo; T *B = new T[lb];
    Rank k = 0; int lc = hi - lo; T *C = _elem + mi;

    for (Rank t = 0; t < lb; ++t) B[t] = A[t];

    while (j < lb) {
        if ((k >= lc) || (B[j] <= C[k])) A[i++] = B[j++];
        else A[i++] = C[k++];
    }
}