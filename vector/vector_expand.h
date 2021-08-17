#pragma once

template <typename T> void Vector<T>::expand() {
    if (_size < _capacity) return;
    if (_capacity < DEFAULT_CAPACITY) _capacity = DEFAULT_CAPACITY;
    T *oldElem = _elem;
    _elem = new T[_capacity << 1];
    copeFrom(oldElem, 0, _size);
    delete [] oldElem;
}