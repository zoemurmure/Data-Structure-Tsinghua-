#pragma once

template <typename T> int List<T>::deduplicate() {
    if(_size < 2) return 0;
    int oldSize = _size;
    ListNodePosi<T> p = first();
    Rank r = 0;
    while(p != trailer) {
        if(ListNodePosi<T> q = find(p->data, r, p))
            remove(q);
        else {
            ++r; p = p->succ;
        }
    }
    return oldSize - _size;
}