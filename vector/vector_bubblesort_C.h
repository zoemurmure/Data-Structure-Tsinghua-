#pragma once

template <typename T> void Vector<T>::bubbleSort(Rank lo, Rank hi) {
    for (Rank last = --hi; lo < hi; hi = last) {
        for (Rank i = lo; i < hi; ++i) {
            if (_elem[i] > _elem[i+1]) {
                swap(_elem[i], _elem[i+1]);
                last = i + 1;
            }
        }
    }
}