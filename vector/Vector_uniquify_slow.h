#pragma once

template <typename T> int Vector<T>::uniquify() {
    int oldSize = _size;
    Rank i = 1;
    while (i < _size) {
        if (_elem[i] == _elem[i-1])
            remove(i);
        else
            ++i;
    }
    return oldSize - _size;
}