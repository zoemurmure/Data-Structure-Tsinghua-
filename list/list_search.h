#pragma once

template <typename T> 
ListNodePosi<T> List<T>::search(T &const e, int n, ListNodePosi<T> p) const {
    p = p->pred;
    while((0 < n--) && (p->data > e)) {
        p = p->pred;
    }
    return p;
}