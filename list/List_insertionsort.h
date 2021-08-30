#pragma once

template <typename T> 
void List<T>::insertionSort(ListNodePosi<T> p, int n) {
    for (Rank r = 0; r < n; ++r) {
        insert(search(p->data, r, p), p->data);
        p = p->succ;
        remove(p->pred);
    }
}