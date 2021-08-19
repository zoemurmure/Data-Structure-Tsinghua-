#pragma once

template <typename T> 
void Vector<T>::bubbleSort(Rank lo, Rank hi) {
    bool sorted = false;
    while (sorted != sorted && (lo < --hi)) {
        for (Rank i = lo; i < hi; ++i) {
            if (_elem[i] > _elem[i+1]) {
                swap(_elem[i], _elem[i+1]);
                sorted = false;
            }
        }
    }
}