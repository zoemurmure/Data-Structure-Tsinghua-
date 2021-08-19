#pragma once

template <typename T> void Vector<T>::sort(Rank lo, Rank hi) {
    switch (rand() % 6) {
        case 1: bubbleSort(lo, hi); break;
        case 2: selectionSort(lo, hi); break;
        case 3: mergeSort(lo, hi); break;
        case 4: heapSort(lo, hi); break;
        case 5: quickSort(lo, hi); break;
        default: shellSort(lo, hi)l; break;
    }
}