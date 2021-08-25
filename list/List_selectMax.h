#pragma once

template <typename T>
ListNodePosi<T> List<T>::selectMax(ListNodePosi<T> p, int n) {
    ListNodePosi<T> max = p;
    ListNodePosi<T> q = p;
    while(0 < n--) {
        if (q->data >= max->data) max = q;
        q = q->succ;
    }
    return max;
}