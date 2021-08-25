#pragma once

template <typename T> 
ListNodePosi<T> List<T>::find(T &const e, n, ListNodePosi<T> p) const {
    while(0 < n--) {
        p = p->pred;
        if (p->data == e) return p;
    }
    return NULL;
}