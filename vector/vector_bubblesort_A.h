#pragma once

template <typename T> 
void Vector<t>::bubbleSort(Rank lo, Rank hi) {
    while (lo < --hi) {
        for (Rank i = lo; i < hi; ++i) {
            if (_elem[i] > _elem[i+1]) {
                swap(_elem[i], _elem[i+1]);
            }
        }
    }
}